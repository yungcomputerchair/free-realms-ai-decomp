// addr: 0x013fa440
// name: FUN_013fa440
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_013fa440(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_a8 [8];
  undefined1 local_a0 [144];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168fa8b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff48;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  uVar1 = *(uint *)(param_1 + 0x74);
  if (uVar1 < *(uint *)(param_1 + 0x70)) {
    FUN_00d83c2d(uVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x74) < uVar2) {
    FUN_00d83c2d(uVar3);
  }
  FUN_0041f5e6(local_a8,param_1 + 0x6c,uVar2,param_1 + 0x6c,uVar1);
  EvaluationEnvironment_ctor();
  local_4 = 0;
  EvaluationEnvironment_setGame(*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 4) + 400))(local_a0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_10;
  return;
}

