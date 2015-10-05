#pragma once

enum {
	MON_CMD_NONE = 0,
	MON_CMD_EXIT,
	MON_CMD_MEM,
	MON_CMD_CHANGEMEM,
	MON_CMD_FILLMEM,
	MON_CMD_TRANSFER,
	MON_CMD_DISASS,
	MON_CMD_STEP,
	MON_CMD_HELP,
	MON_CMD_GO,
	MON_CMD_BREAKPOINT,
	MON_CMD_WATCHPOINT,
	MON_CMD_REMOVEBREAKPOINT,
	MON_CMD_ATTACHIMAGE,
	MON_CMD_DETACHIMAGE,
	MON_CMD_RESET,
	MON_CMD_RESTART,
	MON_CMD_LOADROM,
	MON_CMD_LOADCHARSET,
	MON_CMD_REGS,
	MON_CMD_LOADBIN,
	MON_CMD_SAVEBIN,
	MON_CMD_SAVEPRG,
	MON_CMD_SYS
};

class CPU;

void monitorEnter(CPU *cpu);
