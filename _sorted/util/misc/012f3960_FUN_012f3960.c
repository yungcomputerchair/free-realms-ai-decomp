// addr: 0x012f3960
// name: FUN_012f3960
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_012f3960(void *param_1,uint param_2,char param_3)

{
                    /* Initializes an inline small string at offsets 4..0x18 and copies/assigns
                       string data from two input arguments. No class evidence. */
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_012f3760(param_1,param_2,param_3);
  return param_1;
}

