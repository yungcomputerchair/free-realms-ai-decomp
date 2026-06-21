// addr: 0x0146f8b0
// name: GetSimultaneousTargetState_buttonPressed
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GetSimultaneousTargetState_buttonPressed(void * this, int playerId_, int
   buttonId_) */

bool __thiscall GetSimultaneousTargetState_buttonPressed(void *this,int playerId_,int buttonId_)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *extraout_EAX;
  void *pvVar5;
  void *state;
  char *pcVar6;
  int iVar7;
  int value_;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  value_ = playerId_;
                    /* Handles buttonPressed for GetSimultaneousTargetState, rejecting input in
                       force mode or when a target already exists, then queues a state command and
                       refreshes hints. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ec8b;
  local_c = ExceptionList;
  piVar3 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  pcVar6 = "GetSimultaneousTargetState::buttonPressed (%d, %d)";
  iVar7 = playerId_;
  pvVar4 = (void *)StateMachineState_getGame
                             ("GetSimultaneousTargetState::buttonPressed (%d, %d)",playerId_,
                              buttonId_);
  Game_logGeneral(pvVar4,pcVar6,iVar7);
  iVar7 = *(int *)((int)this + 0x108);
  pvVar4 = (void *)((int)this + 0x104);
  StdRbTreeInt_find(pvVar4,local_14,&playerId_,piVar3);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != pvVar4)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar7) {
    pcVar6 = "Already have target in buttonPressed";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar6,piVar3);
    PlaySingleCardState_emitHintDisplayAction();
    uVar2 = 0;
  }
  else {
    bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
    if (bVar1) {
      pcVar6 = "In force mode, can\'t accept buttonPressed.";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar6,piVar3);
      PlaySingleCardState_buildHintAction();
      uVar2 = 0;
    }
    else {
      if (buttonId_ == 1) {
        pvVar5 = Mem_Alloc(0x30);
        local_4 = 0;
        buttonId_ = (int)pvVar5;
        if (pvVar5 == (void *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          state = (void *)StateMachineState_getGame();
          pvVar5 = GameCommand_ButtonPressed_ctor(pvVar5,state);
        }
        local_4 = 0xffffffff;
        set_field_4(pvVar5,value_);
        StateCommand_setField24(pvVar5,1);
        StateMachineState_getGame(value_,pvVar5);
        Game_dispatchCommandToPlayerOrAll(value_,pvVar5);
        piVar3 = IntDefaultMap_getOrInsert(pvVar4,&playerId_);
        *piVar3 = 0;
      }
      PlaySingleCardState_emitHintDisplayAction();
      uVar2 = (**(code **)(*(int *)this + 0x3c))();
    }
  }
  ExceptionList = local_c;
  return (bool)uVar2;
}

