// addr: 0x0146fa20
// name: GetSimultaneousTargetState_buttonPressedWithString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GetSimultaneousTargetState_buttonPressedWithString(void * this, int
   playerId_, int buttonId_, char * text) */

bool __thiscall
GetSimultaneousTargetState_buttonPressedWithString
          (void *this,int playerId_,int buttonId_,char *text)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *extraout_EAX;
  void *pvVar6;
  void *state;
  char *fmt;
  int iVar7;
  int value_;
  char *pcVar8;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  value_ = playerId_;
                    /* Handles buttonPressedWithString for GetSimultaneousTargetState, logging the
                       player/button/text tuple, rejecting force-mode or duplicate-target input, and
                       queuing a state command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ecbb;
  local_c = ExceptionList;
  piVar4 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  if (*(uint *)(text + 0x18) < 0x10) {
    pcVar8 = text + 4;
  }
  else {
    pcVar8 = *(char **)(text + 4);
  }
  fmt = "GetSimultaneousTargetState::buttonPressedWithString (%d, %d, %s)";
  iVar7 = playerId_;
  pvVar5 = (void *)StateMachineState_getGame
                             ("GetSimultaneousTargetState::buttonPressedWithString (%d, %d, %s)",
                              playerId_,buttonId_,pcVar8);
  Game_logGeneral(pvVar5,fmt,iVar7);
  iVar7 = *(int *)((int)this + 0x108);
  pvVar5 = (void *)((int)this + 0x104);
  StdRbTreeInt_find(pvVar5,local_14,&playerId_,piVar4);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != pvVar5)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar7) {
    pcVar8 = "Already have target in buttonPressedWithString";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar8,piVar4);
    PlaySingleCardState_emitHintDisplayAction();
    uVar3 = 0;
  }
  else {
    bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
    if (bVar1) {
      pcVar8 = "In force mode, can\'t accept buttonPressed.";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar8,piVar4);
      PlaySingleCardState_buildHintAction();
      uVar3 = 0;
    }
    else {
      if (buttonId_ == 1) {
        cVar2 = FUN_01237a70(text,(int)this + 0x8c);
        if (cVar2 != '\0') {
          pvVar6 = Mem_Alloc(0x30);
          local_4 = 0;
          buttonId_ = (int)pvVar6;
          if (pvVar6 == (void *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            state = (void *)StateMachineState_getGame();
            pvVar6 = GameCommand_ButtonPressed_ctor(pvVar6,state);
          }
          local_4 = 0xffffffff;
          set_field_4(pvVar6,value_);
          StateCommand_setField24(pvVar6,1);
          StateMachineState_getGame(value_,pvVar6);
          Game_dispatchCommandToPlayerOrAll(value_,pvVar6);
          piVar4 = IntDefaultMap_getOrInsert(pvVar5,&playerId_);
          *piVar4 = 0;
        }
      }
      PlaySingleCardState_emitHintDisplayAction();
      uVar3 = (**(code **)(*(int *)this + 0x3c))();
    }
  }
  ExceptionList = local_c;
  return (bool)uVar3;
}

