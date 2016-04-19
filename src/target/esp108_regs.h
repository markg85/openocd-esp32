//Generated with esp108-genreg.sh

//Xtensa register list taken from gdb/gdb/xtensa-config.c
//gdb wants the registers in the order gdb/regformats/reg-xtensa.dat describes
//them. The enum and esp108_regs structs should be in the same order.

#define XT_NUM_REGS (173)

//Number of registers returned directly by the G command
//Corresponds to the amount of regs listed in regformats/reg-xtensa.dat in the gdb source
#define XT_NUM_REGS_G_COMMAND (105)

enum xtensa_reg_idx {
	XT_REG_IDX_PC=0,
	XT_REG_IDX_AR0,
	XT_REG_IDX_AR1,
	XT_REG_IDX_AR2,
	XT_REG_IDX_AR3,
	XT_REG_IDX_AR4,
	XT_REG_IDX_AR5,
	XT_REG_IDX_AR6,
	XT_REG_IDX_AR7,
	XT_REG_IDX_AR8,
	XT_REG_IDX_AR9,
	XT_REG_IDX_AR10,
	XT_REG_IDX_AR11,
	XT_REG_IDX_AR12,
	XT_REG_IDX_AR13,
	XT_REG_IDX_AR14,
	XT_REG_IDX_AR15,
	XT_REG_IDX_AR16,
	XT_REG_IDX_AR17,
	XT_REG_IDX_AR18,
	XT_REG_IDX_AR19,
	XT_REG_IDX_AR20,
	XT_REG_IDX_AR21,
	XT_REG_IDX_AR22,
	XT_REG_IDX_AR23,
	XT_REG_IDX_AR24,
	XT_REG_IDX_AR25,
	XT_REG_IDX_AR26,
	XT_REG_IDX_AR27,
	XT_REG_IDX_AR28,
	XT_REG_IDX_AR29,
	XT_REG_IDX_AR30,
	XT_REG_IDX_AR31,
	XT_REG_IDX_AR32,
	XT_REG_IDX_AR33,
	XT_REG_IDX_AR34,
	XT_REG_IDX_AR35,
	XT_REG_IDX_AR36,
	XT_REG_IDX_AR37,
	XT_REG_IDX_AR38,
	XT_REG_IDX_AR39,
	XT_REG_IDX_AR40,
	XT_REG_IDX_AR41,
	XT_REG_IDX_AR42,
	XT_REG_IDX_AR43,
	XT_REG_IDX_AR44,
	XT_REG_IDX_AR45,
	XT_REG_IDX_AR46,
	XT_REG_IDX_AR47,
	XT_REG_IDX_AR48,
	XT_REG_IDX_AR49,
	XT_REG_IDX_AR50,
	XT_REG_IDX_AR51,
	XT_REG_IDX_AR52,
	XT_REG_IDX_AR53,
	XT_REG_IDX_AR54,
	XT_REG_IDX_AR55,
	XT_REG_IDX_AR56,
	XT_REG_IDX_AR57,
	XT_REG_IDX_AR58,
	XT_REG_IDX_AR59,
	XT_REG_IDX_AR60,
	XT_REG_IDX_AR61,
	XT_REG_IDX_AR62,
	XT_REG_IDX_AR63,
	XT_REG_IDX_LBEG,
	XT_REG_IDX_LEND,
	XT_REG_IDX_LCOUNT,
	XT_REG_IDX_SAR,
	XT_REG_IDX_WINDOWBASE,
	XT_REG_IDX_WINDOWSTART,
	XT_REG_IDX_CONFIGID0,
	XT_REG_IDX_CONFIGID1,
	XT_REG_IDX_PS,
	XT_REG_IDX_THREADPTR,
	XT_REG_IDX_BR,
	XT_REG_IDX_SCOMPARE1,
	XT_REG_IDX_ACCLO,
	XT_REG_IDX_ACCHI,
	XT_REG_IDX_M0,
	XT_REG_IDX_M1,
	XT_REG_IDX_M2,
	XT_REG_IDX_M3,
	XT_REG_IDX_EXPSTATE,
	XT_REG_IDX_F64R_LO,
	XT_REG_IDX_F64R_HI,
	XT_REG_IDX_F64S,
	XT_REG_IDX_F0,
	XT_REG_IDX_F1,
	XT_REG_IDX_F2,
	XT_REG_IDX_F3,
	XT_REG_IDX_F4,
	XT_REG_IDX_F5,
	XT_REG_IDX_F6,
	XT_REG_IDX_F7,
	XT_REG_IDX_F8,
	XT_REG_IDX_F9,
	XT_REG_IDX_F10,
	XT_REG_IDX_F11,
	XT_REG_IDX_F12,
	XT_REG_IDX_F13,
	XT_REG_IDX_F14,
	XT_REG_IDX_F15,
	XT_REG_IDX_FCR,
	XT_REG_IDX_FSR,
	XT_REG_IDX_MMID,
	XT_REG_IDX_IBREAKENABLE,
	XT_REG_IDX_MEMCTL,
	XT_REG_IDX_ATOMCTL,
	XT_REG_IDX_DDR,
	XT_REG_IDX_IBREAKA0,
	XT_REG_IDX_IBREAKA1,
	XT_REG_IDX_DBREAKA0,
	XT_REG_IDX_DBREAKA1,
	XT_REG_IDX_DBREAKC0,
	XT_REG_IDX_DBREAKC1,
	XT_REG_IDX_EPC1,
	XT_REG_IDX_EPC2,
	XT_REG_IDX_EPC3,
	XT_REG_IDX_EPC4,
	XT_REG_IDX_EPC5,
	XT_REG_IDX_EPC6,
	XT_REG_IDX_EPC7,
	XT_REG_IDX_DEPC,
	XT_REG_IDX_EPS2,
	XT_REG_IDX_EPS3,
	XT_REG_IDX_EPS4,
	XT_REG_IDX_EPS5,
	XT_REG_IDX_EPS6,
	XT_REG_IDX_EPS7,
	XT_REG_IDX_EXCSAVE1,
	XT_REG_IDX_EXCSAVE2,
	XT_REG_IDX_EXCSAVE3,
	XT_REG_IDX_EXCSAVE4,
	XT_REG_IDX_EXCSAVE5,
	XT_REG_IDX_EXCSAVE6,
	XT_REG_IDX_EXCSAVE7,
	XT_REG_IDX_CPENABLE,
	XT_REG_IDX_INTERRUPT,
	XT_REG_IDX_INTSET,
	XT_REG_IDX_INTCLEAR,
	XT_REG_IDX_INTENABLE,
	XT_REG_IDX_VECBASE,
	XT_REG_IDX_EXCCAUSE,
	XT_REG_IDX_DEBUGCAUSE,
	XT_REG_IDX_CCOUNT,
	XT_REG_IDX_PRID,
	XT_REG_IDX_ICOUNT,
	XT_REG_IDX_ICOUNTLEVEL,
	XT_REG_IDX_EXCVADDR,
	XT_REG_IDX_CCOMPARE0,
	XT_REG_IDX_CCOMPARE1,
	XT_REG_IDX_CCOMPARE2,
	XT_REG_IDX_MISC0,
	XT_REG_IDX_MISC1,
	XT_REG_IDX_MISC2,
	XT_REG_IDX_MISC3,
	XT_REG_IDX_A0,
	XT_REG_IDX_A1,
	XT_REG_IDX_A2,
	XT_REG_IDX_A3,
	XT_REG_IDX_A4,
	XT_REG_IDX_A5,
	XT_REG_IDX_A6,
	XT_REG_IDX_A7,
	XT_REG_IDX_A8,
	XT_REG_IDX_A9,
	XT_REG_IDX_A10,
	XT_REG_IDX_A11,
	XT_REG_IDX_A12,
	XT_REG_IDX_A13,
	XT_REG_IDX_A14,
	XT_REG_IDX_A15,
};


static const struct esp108_reg_desc esp108_regs[XT_NUM_REGS] = {
	{ "pc",				176+XT_DEBUGLEVEL, XT_REG_SPECIAL, 0 }, //actually epc[debuglevel]
	{ "ar0",				0x00, XT_REG_GENERAL, 0 }, 
	{ "ar1",				0x01, XT_REG_GENERAL, 0 }, 
	{ "ar2",				0x02, XT_REG_GENERAL, 0 }, 
	{ "ar3",				0x03, XT_REG_GENERAL, 0 }, 
	{ "ar4",				0x04, XT_REG_GENERAL, 0 }, 
	{ "ar5",				0x05, XT_REG_GENERAL, 0 }, 
	{ "ar6",				0x06, XT_REG_GENERAL, 0 }, 
	{ "ar7",				0x07, XT_REG_GENERAL, 0 }, 
	{ "ar8",				0x08, XT_REG_GENERAL, 0 }, 
	{ "ar9",				0x09, XT_REG_GENERAL, 0 }, 
	{ "ar10",				0x0A, XT_REG_GENERAL, 0 }, 
	{ "ar11",				0x0B, XT_REG_GENERAL, 0 }, 
	{ "ar12",				0x0C, XT_REG_GENERAL, 0 }, 
	{ "ar13",				0x0D, XT_REG_GENERAL, 0 }, 
	{ "ar14",				0x0E, XT_REG_GENERAL, 0 }, 
	{ "ar15",				0x0F, XT_REG_GENERAL, 0 }, 
	{ "ar16",				0x10, XT_REG_GENERAL, 0 }, 
	{ "ar17",				0x11, XT_REG_GENERAL, 0 }, 
	{ "ar18",				0x12, XT_REG_GENERAL, 0 }, 
	{ "ar19",				0x13, XT_REG_GENERAL, 0 }, 
	{ "ar20",				0x14, XT_REG_GENERAL, 0 }, 
	{ "ar21",				0x15, XT_REG_GENERAL, 0 }, 
	{ "ar22",				0x16, XT_REG_GENERAL, 0 }, 
	{ "ar23",				0x17, XT_REG_GENERAL, 0 }, 
	{ "ar24",				0x18, XT_REG_GENERAL, 0 }, 
	{ "ar25",				0x19, XT_REG_GENERAL, 0 }, 
	{ "ar26",				0x1A, XT_REG_GENERAL, 0 }, 
	{ "ar27",				0x1B, XT_REG_GENERAL, 0 }, 
	{ "ar28",				0x1C, XT_REG_GENERAL, 0 }, 
	{ "ar29",				0x1D, XT_REG_GENERAL, 0 }, 
	{ "ar30",				0x1E, XT_REG_GENERAL, 0 }, 
	{ "ar31",				0x1F, XT_REG_GENERAL, 0 }, 
	{ "ar32",				0x20, XT_REG_GENERAL, 0 }, 
	{ "ar33",				0x21, XT_REG_GENERAL, 0 }, 
	{ "ar34",				0x22, XT_REG_GENERAL, 0 }, 
	{ "ar35",				0x23, XT_REG_GENERAL, 0 }, 
	{ "ar36",				0x24, XT_REG_GENERAL, 0 }, 
	{ "ar37",				0x25, XT_REG_GENERAL, 0 }, 
	{ "ar38",				0x26, XT_REG_GENERAL, 0 }, 
	{ "ar39",				0x27, XT_REG_GENERAL, 0 }, 
	{ "ar40",				0x28, XT_REG_GENERAL, 0 }, 
	{ "ar41",				0x29, XT_REG_GENERAL, 0 }, 
	{ "ar42",				0x2A, XT_REG_GENERAL, 0 }, 
	{ "ar43",				0x2B, XT_REG_GENERAL, 0 }, 
	{ "ar44",				0x2C, XT_REG_GENERAL, 0 }, 
	{ "ar45",				0x2D, XT_REG_GENERAL, 0 }, 
	{ "ar46",				0x2E, XT_REG_GENERAL, 0 }, 
	{ "ar47",				0x2F, XT_REG_GENERAL, 0 }, 
	{ "ar48",				0x30, XT_REG_GENERAL, 0 }, 
	{ "ar49",				0x31, XT_REG_GENERAL, 0 }, 
	{ "ar50",				0x32, XT_REG_GENERAL, 0 }, 
	{ "ar51",				0x33, XT_REG_GENERAL, 0 }, 
	{ "ar52",				0x34, XT_REG_GENERAL, 0 }, 
	{ "ar53",				0x35, XT_REG_GENERAL, 0 }, 
	{ "ar54",				0x36, XT_REG_GENERAL, 0 }, 
	{ "ar55",				0x37, XT_REG_GENERAL, 0 }, 
	{ "ar56",				0x38, XT_REG_GENERAL, 0 }, 
	{ "ar57",				0x39, XT_REG_GENERAL, 0 }, 
	{ "ar58",				0x3A, XT_REG_GENERAL, 0 }, 
	{ "ar59",				0x3B, XT_REG_GENERAL, 0 }, 
	{ "ar60",				0x3C, XT_REG_GENERAL, 0 }, 
	{ "ar61",				0x3D, XT_REG_GENERAL, 0 }, 
	{ "ar62",				0x3E, XT_REG_GENERAL, 0 }, 
	{ "ar63",				0x3F, XT_REG_GENERAL, 0 }, 
	{ "lbeg",				0x00, XT_REG_SPECIAL, 0 }, 
	{ "lend",				0x01, XT_REG_SPECIAL, 0 }, 
	{ "lcount",				0x02, XT_REG_SPECIAL, 0 }, 
	{ "sar",				0x03, XT_REG_SPECIAL, 0 }, 
	{ "windowbase",				0x48, XT_REG_SPECIAL, 0 }, 
	{ "windowstart",				0x49, XT_REG_SPECIAL, 0 }, 
	{ "configid0",				0xB0, XT_REG_SPECIAL, 0 }, 
	{ "configid1",				0xD0, XT_REG_SPECIAL, 0 }, 
	{ "ps",				0xC6, XT_REG_SPECIAL, 0 }, //actually EPS[debuglevel]
	{ "threadptr",				0xE7, XT_REG_USER, 0 }, 
	{ "br",				0x04, XT_REG_SPECIAL, 0 }, 
	{ "scompare1",				0x0C, XT_REG_SPECIAL, 0 }, 
	{ "acclo",				0x10, XT_REG_SPECIAL, 0 }, 
	{ "acchi",				0x11, XT_REG_SPECIAL, 0 }, 
	{ "m0",				0x20, XT_REG_SPECIAL, 0 }, 
	{ "m1",				0x21, XT_REG_SPECIAL, 0 }, 
	{ "m2",				0x22, XT_REG_SPECIAL, 0 }, 
	{ "m3",				0x23, XT_REG_SPECIAL, 0 }, 
	{ "expstate",				0xE6, XT_REG_USER, 0 }, 
	{ "f64r_lo",				0xEA, XT_REG_USER, 0 }, 
	{ "f64r_hi",				0xEB, XT_REG_USER, 0 }, 
	{ "f64s",				0xEC, XT_REG_USER, 0 }, 
	{ "f0",				0x00, XT_REG_FR, 0 }, 
	{ "f1",				0x01, XT_REG_FR, 0 }, 
	{ "f2",				0x02, XT_REG_FR, 0 }, 
	{ "f3",				0x03, XT_REG_FR, 0 }, 
	{ "f4",				0x04, XT_REG_FR, 0 }, 
	{ "f5",				0x05, XT_REG_FR, 0 }, 
	{ "f6",				0x06, XT_REG_FR, 0 }, 
	{ "f7",				0x07, XT_REG_FR, 0 }, 
	{ "f8",				0x08, XT_REG_FR, 0 }, 
	{ "f9",				0x09, XT_REG_FR, 0 }, 
	{ "f10",				0x0A, XT_REG_FR, 0 }, 
	{ "f11",				0x0B, XT_REG_FR, 0 }, 
	{ "f12",				0x0C, XT_REG_FR, 0 }, 
	{ "f13",				0x0D, XT_REG_FR, 0 }, 
	{ "f14",				0x0E, XT_REG_FR, 0 }, 
	{ "f15",				0x0F, XT_REG_FR, 0 }, 
	{ "fcr",				0xE8, XT_REG_USER, 0 }, 
	{ "fsr",				0xE9, XT_REG_USER, 0 }, 
	{ "mmid",				0x59, XT_REG_SPECIAL, XT_REGF_NOREAD }, 
	{ "ibreakenable",				0x60, XT_REG_SPECIAL, 0 }, 
	{ "memctl",				0x61, XT_REG_SPECIAL, 0 }, 
	{ "atomctl",				0x63, XT_REG_SPECIAL, 0 }, 
	{ "ddr",				0x68, XT_REG_DEBUG, XT_REGF_NOREAD }, 
	{ "ibreaka0",				0x80, XT_REG_SPECIAL, 0 }, 
	{ "ibreaka1",				0x81, XT_REG_SPECIAL, 0 }, 
	{ "dbreaka0",				0x90, XT_REG_SPECIAL, 0 }, 
	{ "dbreaka1",				0x91, XT_REG_SPECIAL, 0 }, 
	{ "dbreakc0",				0xA0, XT_REG_SPECIAL, 0 }, 
	{ "dbreakc1",				0xA1, XT_REG_SPECIAL, 0 }, 
	{ "epc1",				0xB1, XT_REG_SPECIAL, 0 }, 
	{ "epc2",				0xB2, XT_REG_SPECIAL, 0 }, 
	{ "epc3",				0xB3, XT_REG_SPECIAL, 0 }, 
	{ "epc4",				0xB4, XT_REG_SPECIAL, 0 }, 
	{ "epc5",				0xB5, XT_REG_SPECIAL, 0 }, 
	{ "epc6",				0xB6, XT_REG_SPECIAL, 0 }, 
	{ "epc7",				0xB7, XT_REG_SPECIAL, 0 }, 
	{ "depc",				0xC0, XT_REG_SPECIAL, 0 }, 
	{ "eps2",				0xC2, XT_REG_SPECIAL, 0 }, 
	{ "eps3",				0xC3, XT_REG_SPECIAL, 0 }, 
	{ "eps4",				0xC4, XT_REG_SPECIAL, 0 }, 
	{ "eps5",				0xC5, XT_REG_SPECIAL, 0 }, 
	{ "eps6",				0xC6, XT_REG_SPECIAL, 0 }, 
	{ "eps7",				0xC7, XT_REG_SPECIAL, 0 }, 
	{ "excsave1",				0xD1, XT_REG_SPECIAL, 0 }, 
	{ "excsave2",				0xD2, XT_REG_SPECIAL, 0 }, 
	{ "excsave3",				0xD3, XT_REG_SPECIAL, 0 }, 
	{ "excsave4",				0xD4, XT_REG_SPECIAL, 0 }, 
	{ "excsave5",				0xD5, XT_REG_SPECIAL, 0 }, 
	{ "excsave6",				0xD6, XT_REG_SPECIAL, 0 }, 
	{ "excsave7",				0xD7, XT_REG_SPECIAL, 0 }, 
	{ "cpenable",				0xE0, XT_REG_SPECIAL, 0 }, 
	{ "interrupt",				0xE2, XT_REG_SPECIAL, 0 }, 
	{ "intset",				0xE2, XT_REG_SPECIAL, XT_REGF_NOREAD }, 
	{ "intclear",				0xE3, XT_REG_SPECIAL, XT_REGF_NOREAD }, 
	{ "intenable",				0xE4, XT_REG_SPECIAL, 0 }, 
	{ "vecbase",				0xE7, XT_REG_SPECIAL, 0 }, 
	{ "exccause",				0xE8, XT_REG_SPECIAL, 0 }, 
	{ "debugcause",				0xE9, XT_REG_SPECIAL, 0 }, 
	{ "ccount",				0xEA, XT_REG_SPECIAL, 0 }, 
	{ "prid",				0xEB, XT_REG_SPECIAL, 0 }, 
	{ "icount",				0xEC, XT_REG_SPECIAL, 0 }, 
	{ "icountlevel",				0xED, XT_REG_SPECIAL, 0 }, 
	{ "excvaddr",				0xEE, XT_REG_SPECIAL, 0 }, 
	{ "ccompare0",				0xF0, XT_REG_SPECIAL, 0 }, 
	{ "ccompare1",				0xF1, XT_REG_SPECIAL, 0 }, 
	{ "ccompare2",				0xF2, XT_REG_SPECIAL, 0 }, 
	{ "misc0",				0xF4, XT_REG_SPECIAL, 0 }, 
	{ "misc1",				0xF5, XT_REG_SPECIAL, 0 }, 
	{ "misc2",				0xF6, XT_REG_SPECIAL, 0 }, 
	{ "misc3",				0xF7, XT_REG_SPECIAL, 0 }, 
	{ "a0",				XT_REG_IDX_AR0, XT_REG_RELGEN, 0 },  //WARNING: For these registers, regnum points to the
	{ "a1",				XT_REG_IDX_AR1, XT_REG_RELGEN, 0 },  //index of the corresponding ARx registers, NOT to
	{ "a2",				XT_REG_IDX_AR2, XT_REG_RELGEN, 0 },  //the processor register number!
	{ "a3",				XT_REG_IDX_AR3, XT_REG_RELGEN, 0 }, 
	{ "a4",				XT_REG_IDX_AR4, XT_REG_RELGEN, 0 }, 
	{ "a5",				XT_REG_IDX_AR5, XT_REG_RELGEN, 0 }, 
	{ "a6",				XT_REG_IDX_AR6, XT_REG_RELGEN, 0 }, 
	{ "a7",				XT_REG_IDX_AR7, XT_REG_RELGEN, 0 }, 
	{ "a8",				XT_REG_IDX_AR8, XT_REG_RELGEN, 0 }, 
	{ "a9",				XT_REG_IDX_AR9, XT_REG_RELGEN, 0 }, 
	{ "a10",				XT_REG_IDX_AR10, XT_REG_RELGEN, 0 }, 
	{ "a11",				XT_REG_IDX_AR11, XT_REG_RELGEN, 0 }, 
	{ "a12",				XT_REG_IDX_AR12, XT_REG_RELGEN, 0 }, 
	{ "a13",				XT_REG_IDX_AR13, XT_REG_RELGEN, 0 }, 
	{ "a14",				XT_REG_IDX_AR14, XT_REG_RELGEN, 0 }, 
	{ "a15",				XT_REG_IDX_AR15, XT_REG_RELGEN, 0 }, 
};

