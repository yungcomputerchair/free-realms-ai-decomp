// addr: 0x0080ad50
// name: FUN_0080ad50
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0080ad50(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a SkyDefinition blend segment from subobjects at offsets
                       0x10/0x80 and duration/state at 0x160, then returns the supplied value. No
                       exact class evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01568039;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00808ec0(param_1 + 0x10,param_1 + 0x80,*(undefined4 *)(param_1 + 0x160));
  ExceptionList = local_c;
  return param_2;
}

