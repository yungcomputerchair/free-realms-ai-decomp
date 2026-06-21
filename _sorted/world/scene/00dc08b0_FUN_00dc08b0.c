// addr: 0x00dc08b0
// name: FUN_00dc08b0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dc08b0(undefined4 param_1)

{
  undefined1 auStack_50 [52];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Copies a matrix/transform into an object secondary transform buffer under the
                       global lock, using a fallback wrapper when Umbra is not initialized. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0161b508;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (DAT_01bf3db4 == 0) {
    FUN_00ddcd60(param_1);
    ExceptionList = local_1c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  uStack_14 = 0;
  FUN_00dcc480(auStack_50,param_1);
  FUN_00dd2a30(auStack_50);
  uStack_14 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_1c;
  return;
}

