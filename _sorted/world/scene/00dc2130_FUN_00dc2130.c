// addr: 0x00dc2130
// name: FUN_00dc2130
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dc2130(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Updates the global transform/matrix slot for an object under the Umbra lock,
                       or falls back to the non-initialized wrapper when the subsystem is not
                       active. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161b7d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    FUN_00ddcc60(param_2);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  FUN_00dcc5a0(param_2,*(int *)(param_1 + 4) * 0x30 + DAT_01bf3f6c);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

