// addr: 0x00dbf300
// name: FUN_00dbf300
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dbf300(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Sets or replaces an Umbra/visibility object association under the global
                       scene lock, with a fallback wrapper when the Umbra subsystem is not
                       initialized. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161b0e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    FUN_00ddb7d0(param_1);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  FUN_00dcef40(param_1);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

