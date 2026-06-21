// addr: 0x005fa7c4
// name: FUN_005fa7c4
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_005fa7c4(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* Constructs an object from two arguments by initializing a common base and
                       defaulting several fields before calling FUN_005de4df. No class evidence. */
  FUN_005f7e76();
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_005de4df(param_2,param_3);
  return param_1;
}

