// addr: 0x0080d240
// name: FUN_0080d240
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0080d240(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a SkyDefinition controller segment using subobjects at offsets
                       0x10/0xa0 and duration/state at 0x1c0, then returns the supplied value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01568729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0080b680(param_1 + 0x10,param_1 + 0xa0,*(undefined4 *)(param_1 + 0x1c0));
  ExceptionList = local_c;
  return param_2;
}

