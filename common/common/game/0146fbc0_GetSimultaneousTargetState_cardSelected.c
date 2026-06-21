// addr: 0x0146fbc0
// name: GetSimultaneousTargetState_cardSelected
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GetSimultaneousTargetState_cardSelected(void * this, int playerId_, int
   cardId_) */

bool __thiscall GetSimultaneousTargetState_cardSelected(void *this,int playerId_,int cardId_)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *extraout_EAX;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint value_;
  char *pcVar10;
  int local_1c [2];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar9 = cardId_;
  value_ = playerId_;
                    /* Handles cardSelected for GetSimultaneousTargetState, validating the target
                       list and duplicate selection state before recording the selected card and
                       refreshing hints. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169eceb;
  local_c = ExceptionList;
  piVar4 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  ExceptionList = &local_c;
  pcVar10 = "GetSimultaneousTargetState::cardSelected (%d, %d)";
  iVar6 = playerId_;
  pvVar5 = (void *)StateMachineState_getGame
                             ("GetSimultaneousTargetState::cardSelected (%d, %d)",playerId_,cardId_)
  ;
  Game_logGeneral(pvVar5,pcVar10,iVar6);
  pvVar5 = (void *)StateMachineState_getGame();
  bVar2 = Game_getFlag_14d(pvVar5);
  if (!bVar2) {
    pvVar5 = (void *)StateMachineState_getGame();
    iVar6 = Game_getMyPlayerID(pvVar5);
    if (iVar6 != value_) goto LAB_0146fda6;
  }
  iVar9 = *(int *)((int)this + 0x108);
  StdRbTreeInt_find((void *)((int)this + 0x104),local_1c,&playerId_,piVar4);
  if (((void *)*extraout_EAX == (void *)0x0) ||
     ((void *)*extraout_EAX != (void *)((int)this + 0x104))) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar9) {
    pcVar10 = "card has already been selected for player %d";
    iVar9 = playerId_;
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar10,iVar9);
    PlaySingleCardState_emitHintDisplayAction();
    ExceptionList = local_c;
    return false;
  }
  piVar7 = (int *)FUN_0137bb00(local_14,&playerId_);
  iVar9 = *piVar7;
  iVar6 = *(int *)((int)this + 0xfc);
  iVar1 = piVar7[1];
  local_1c[0] = iVar9;
  if ((iVar9 == 0) || (iVar9 != (int)this + 0xf8)) {
    FUN_00d83c2d();
  }
  if (iVar1 == iVar6) {
    pcVar10 = "Player not in validTarget list.";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar10,piVar4);
    PlaySingleCardState_emitHintDisplayAction();
    ExceptionList = local_c;
    return false;
  }
  if (iVar9 == 0) {
    FUN_00d83c2d();
  }
  if (iVar1 == *(int *)(iVar9 + 4)) {
    FUN_00d83c2d();
  }
  piVar4 = *(int **)(iVar1 + 0x18);
  if (piVar4 < *(int **)(iVar1 + 0x14)) {
    FUN_00d83c2d();
  }
  if (iVar1 == *(int *)(iVar9 + 4)) {
    FUN_00d83c2d();
  }
  piVar7 = *(int **)(iVar1 + 0x14);
  if (*(int **)(iVar1 + 0x18) < piVar7) {
    FUN_00d83c2d();
  }
  for (; (piVar7 != piVar4 && (*piVar7 != cardId_)); piVar7 = piVar7 + 1) {
  }
  if (iVar1 == *(int *)(local_1c[0] + 4)) {
    FUN_00d83c2d();
  }
  piVar4 = *(int **)(iVar1 + 0x18);
  if (piVar4 < *(int **)(iVar1 + 0x14)) {
    FUN_00d83c2d();
  }
  if (iVar1 == -0x10) {
    FUN_00d83c2d();
  }
  iVar9 = cardId_;
  value_ = playerId_;
  if (piVar7 == piVar4) {
    pcVar10 = "%d is not in validTargetList";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar10,iVar9);
    PlaySingleCardState_buildHintAction();
    ExceptionList = local_c;
    return false;
  }
LAB_0146fda6:
  piVar4 = IntDefaultMap_getOrInsert((void *)((int)this + 0x104),&playerId_);
  *piVar4 = iVar9;
  playerId_ = (int)Mem_Alloc(0x38);
  local_4 = 0;
  if ((void *)playerId_ == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar8 = StateMachineState_getGame();
    pvVar5 = (void *)GameCommand_CardSelected_ctor(uVar8);
  }
  local_4 = 0xffffffff;
  set_field_4(pvVar5,value_);
  GameCommand_CardSelected_setCard(iVar9);
  StateMachineState_getGame(value_,pvVar5);
  Game_dispatchCommandToPlayerOrAll(value_,pvVar5);
  uVar3 = (**(code **)(*(int *)this + 0x3c))();
  ExceptionList = local_c;
  return (bool)uVar3;
}

