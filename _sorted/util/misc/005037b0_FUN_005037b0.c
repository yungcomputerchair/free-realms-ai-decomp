// addr: 0x005037b0
// name: FUN_005037b0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4
FUN_005037b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
                    /* Wrapper that initializes an output range length and delegates to a larger
                       rectangle/span processing helper. Exact semantics not evident. */
  FUN_004f15f9(param_1,param_7 - param_4);
  FUN_004f1864(&param_8,0,param_3,param_4,0,param_6,param_7,0,param_9,param_10,param_1,0,0);
  return param_1;
}

