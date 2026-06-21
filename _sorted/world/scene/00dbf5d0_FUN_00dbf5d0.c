// addr: 0x00dbf5d0
// name: FUN_00dbf5d0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dbf5d0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Releases or removes an Umbra/visibility object under the global scene lock,
                       with a fallback wrapper when the Umbra subsystem is not initialized. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161b148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    FUN_00ddba90(param_1);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  FUN_00dce960(param_1);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

