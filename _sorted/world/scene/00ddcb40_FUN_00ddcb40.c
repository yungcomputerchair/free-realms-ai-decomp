// addr: 0x00ddcb40
// name: FUN_00ddcb40
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00ddcb40(undefined4 param_1)

{
  undefined1 auStack_50 [52];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Converts/copies a matrix into a stack transform and applies it to an object
                       under a global lock. Exact wrapper operation is not named. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0161cb18;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  uStack_14 = 0;
  FUN_00df21d0(auStack_50,param_1);
  FUN_00df55a0(auStack_50);
  uStack_14 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_1c;
  return;
}

