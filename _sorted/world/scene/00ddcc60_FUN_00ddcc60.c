// addr: 0x00ddcc60
// name: FUN_00ddcc60
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ddcc60(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Runs a scene/Umbra operation on this+0x30 under a global critical-section or
                       lock pair. Exact operation is not identified. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161cb78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  FUN_00df22f0(param_2,param_1 + 0x30);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return;
}

