// addr: 0x00ddba90
// name: FUN_00ddba90
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00ddba90(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Runs FUN_00df48c0 inside a global critical-section or lock pair. This appears
                       to be an Umbra/scene wrapper, but the wrapped operation is not named. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161c728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  FUN_00df48c0(param_1);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return;
}

