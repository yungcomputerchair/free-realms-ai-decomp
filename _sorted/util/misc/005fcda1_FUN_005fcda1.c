// addr: 0x005fcda1
// name: FUN_005fcda1
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_005fcda1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* Constructs an object from three arguments by initializing a common base and
                       defaulting several fields before calling FUN_005fc05a. No class evidence. */
  FUN_005f7e76();
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_005fc05a(param_2,param_3,param_4);
  return param_1;
}

