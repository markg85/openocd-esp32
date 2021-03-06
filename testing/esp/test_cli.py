import logging
import debug_backend as dbg
from debug_backend_tests import *


def get_logger():
    return logging.getLogger(__name__)


########################################################################
#                         TESTS IMPLEMENTATION                         #
########################################################################


class MacTestsImpl:
    """
    Test cases which are common for dual and single core modes. The test's scenario:
    ---

    """
    def setUp(self):
        self.oocd.cmd_exec("reset halt")

    def tearDown(self):
        pass

    def get_mac_manually(self):
        """
        Returns
        -------
        List[str]
        """
        self.oocd.cmd_exec("xtensa set_permissive 1")
        self.oocd.cmd_exec("mem2array mac 8 $EFUSE_BLK0_RDATA1_REG 6")
        self.oocd.cmd_exec("xtensa set_permissive 0")
        m0 = self.oocd.cmd_exec("format %02x $mac(0)").strip('\n')
        m1 = self.oocd.cmd_exec("format %02x $mac(1)").strip('\n')
        m2 = self.oocd.cmd_exec("format %02x $mac(2)").strip('\n')
        m3 = self.oocd.cmd_exec("format %02x $mac(3)").strip('\n')
        m4 = self.oocd.cmd_exec("format %02x $mac(4)").strip('\n')
        m5 = self.oocd.cmd_exec("format %02x $mac(5)").strip('\n')
        get_logger().debug("Read using mem2array: '%s %s %s %s %s %s'" % (m5, m4, m3, m2, m1, m0))
        return (m5, m4, m3, m2, m1, m0)

    def test_mac_cmd(self):
        """
        Test of esp_get_mac command
        - read mac in 6 strings, each string - value of byte
        - read results of 'esp_get_mac' and 'esp_get_mac format'
        - compare results with expected ones
        """
        m5, m4, m3, m2, m1, m0 = self.get_mac_manually()

        mac_hex = self.oocd.cmd_exec("esp_get_mac").strip('\n')
        mac_hex_expected = "0x0000%s%s%s%s%s%s" % (m5, m4, m3, m2, m1, m0)
        get_logger().debug("Read using 'esp_get_mac': '%s'" % mac_hex)
        get_logger().debug("Expected using 'esp_get_mac': '%s'" % mac_hex_expected)

        mac_formatted = self.oocd.cmd_exec("esp_get_mac format").strip('\n')
        mac_formatted_expected = "%s:%s:%s:%s:%s:%s" % (m5, m4, m3, m2, m1, m0)
        get_logger().debug("Read using 'esp_get_mac format': '%s'" % mac_formatted)
        get_logger().debug("Expected using 'esp_get_mac format': '%s'" % mac_formatted_expected)

        self.assertEqual(mac_hex, mac_hex_expected)
        self.assertEqual(mac_formatted, mac_formatted_expected)


########################################################################
#              TESTS DEFINITION WITH SPECIAL TESTS                     #
########################################################################


class MacTestsDual(DebuggerGenericTestAppTestsDual, MacTestsImpl):
    """ Test cases in dual core mode
    """
    def setUp(self):
        DebuggerGenericTestAppTestsDual.setUp(self)
        MacTestsImpl.setUp(self)

    def tearDown(self):
        DebuggerGenericTestAppTestsDual.tearDown(self)
        MacTestsImpl.tearDown(self)


class MacTestsSingle(DebuggerGenericTestAppTestsSingle, MacTestsImpl):
    """ Test cases in single core mode
    """
    def setUp(self):
        DebuggerGenericTestAppTestsSingle.setUp(self)
        MacTestsImpl.setUp(self)

    def tearDown(self):
        DebuggerGenericTestAppTestsSingle.tearDown(self)
        MacTestsImpl.tearDown(self)
