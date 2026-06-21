// addr: 0x01469600
// name: MultiPlayerState_doEffect
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall MultiPlayerState_doEffect(int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *game;
  undefined4 uVar4;
  void *env;
  void *extraout_EDX;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_bc [4];
  void *pvStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Executes MultiPlayerState effects for the selected player and command list,
                       appending results and advancing state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e421;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff34);
  ExceptionList = &local_c;
  pcVar6 = "MultiPlayerState::doEffect";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,pcVar6,pvVar3);
  EvaluationEnvironment_ctor();
  local_4 = 0;
  EvaluationEnvironment_copyFrom(local_a0,*(void **)(param_1 + 0xe8),pvVar3);
  EvaluationEnvironment_setBooleanKey4(0);
  FUN_013815c0(2);
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar2 = *(uint *)(param_1 + 0x120);
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (uVar2 <= *(uint *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = (undefined4 *)(uVar2 - 4);
  if (*(undefined4 **)(iVar1 + 8) <= puVar5) {
    FUN_00d83c2d();
  }
  FUN_013876d0(*puVar5);
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar2 = *(uint *)(param_1 + 0x120);
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (uVar2 <= *(uint *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = (undefined4 *)(uVar2 - 4);
  if (*(undefined4 **)(iVar1 + 8) <= puVar5) {
    FUN_00d83c2d();
  }
  FUN_013815b0(*puVar5);
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  CommandObjectList_evaluateToValueData((void *)(param_1 + 0xf8),env);
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar2 = *(uint *)(param_1 + 0x120);
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (uVar2 <= *(uint *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  if (*(uint *)(iVar1 + 8) <= uVar2 - 4) {
    FUN_00d83c2d();
  }
  uVar4 = GamePlayer_getPlayerId();
  pcVar6 = "Setting player to player: %d";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,pcVar6,uVar4);
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar2 = *(uint *)(param_1 + 0x120);
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (uVar2 <= *(uint *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = (undefined4 *)(uVar2 - 4);
  if (*(undefined4 **)(iVar1 + 8) <= puVar5) {
    FUN_00d83c2d();
  }
  FUN_013876d0(*puVar5);
  iVar1 = *(int *)(param_1 + 0x11c);
  uVar2 = *(uint *)(param_1 + 0x120);
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (uVar2 <= *(uint *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = (undefined4 *)(uVar2 - 4);
  if (*(undefined4 **)(iVar1 + 8) <= puVar5) {
    FUN_00d83c2d();
  }
  FUN_013815b0(*puVar5);
  if (*(int *)(param_1 + 0x11c) == 0) {
    FUN_00d83c2d();
  }
  pvVar3 = *(void **)(param_1 + 0x120);
  if (pvVar3 <= *(void **)(*(int *)(param_1 + 0x11c) + 4)) {
    FUN_00d83c2d();
    pvVar3 = extraout_EDX;
  }
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -4;
  PlayElementList_collectCommandObjects(local_a0,pvVar3);
  local_4._0_1_ = 2;
  uVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  GameResult_appendValue(local_bc);
  uVar4 = StateMachine_setCurrentState(uVar4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvStack_b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_b8);
  }
  pvStack_b8 = (void *)0x0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
  local_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return uVar4;
}

