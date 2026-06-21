// addr: 0x00dc0800
// name: FUN_00dc0800
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dc0800(undefined4 param_1)

{
  undefined1 auStack_50 [52];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Applies an alternate matrix/transform update under the global Umbra lock,
                       converting the input into a stack buffer before updating the object
                       transform. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0161b4d8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (DAT_01bf3db4 == 0) {
    FUN_00ddcbd0(param_1);
    ExceptionList = local_1c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  uStack_14 = 0;
  FUN_00dcc500(auStack_50,param_1);
  FUN_00dd0140(auStack_50);
  uStack_14 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_1c;
  return;
}

