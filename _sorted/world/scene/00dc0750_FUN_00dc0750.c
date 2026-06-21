// addr: 0x00dc0750
// name: FUN_00dc0750
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dc0750(undefined4 param_1)

{
  undefined1 auStack_50 [52];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Applies a matrix/transform update to an Umbra object under the global lock,
                       using 00dcc480 to normalize/copy the input then 00dd0140 to store it. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0161b4a8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (DAT_01bf3db4 == 0) {
    FUN_00ddcb40(param_1);
    ExceptionList = local_1c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  uStack_14 = 0;
  FUN_00dcc480(auStack_50,param_1);
  FUN_00dd0140(auStack_50);
  uStack_14 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_1c;
  return;
}

