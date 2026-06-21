// addr: 0x006b1313
// name: FUN_006b1313
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_006b1313(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* Constructs/initializes an object by running a base helper, setting default
                       state fields (1, string-table pointer, -1, zeros), then invoking another
                       initializer with three arguments. No class evidence, so left unnamed. */
  FUN_006b0412();
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 **)(param_1 + 0x54) = &DAT_01bc7e28;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_006b1121(param_2,param_3,param_4);
  return param_1;
}

