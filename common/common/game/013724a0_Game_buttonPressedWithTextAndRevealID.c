// addr: 0x013724a0
// name: Game_buttonPressedWithTextAndRevealID
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_buttonPressedWithTextAndRevealID(void * this, int playerID_, int
   buttonID_, void * text, int revealID_) */

bool __thiscall
Game_buttonPressedWithTextAndRevealID
          (void *this,int playerID_,int buttonID_,void *text,int revealID_)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined8 uVar4;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Handles a button press with text and a reveal id, logging it and either
                       passing text/no-text to the current state or consuming/clearing the reveal
                       id. Returns whether the current state accepted it. */
  puStack_3f8 = &LAB_01680f63;
  local_3fc = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_3f0;
  ExceptionList = &local_3fc;
  local_3f4 = 0;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x13a4);
  }
  pvVar2 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x13a5);
  }
  if (*(uint *)((int)text + 0x18) < 0x10) {
    iVar3 = (int)text + 4;
  }
  else {
    iVar3 = *(int *)((int)text + 4);
  }
  Game_writeGameLog(this,"buttonPressedWithTextAndRevealID\t%d\t%d\t%s\t%d",playerID_,buttonID_,
                    iVar3,revealID_);
  GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  uVar4 = StateMachine_getCurrentState();
  bVar1 = IntToBoolMap_getValue(this,(int)((ulonglong)uVar4 >> 0x20));
  if (bVar1) {
    if ((*(int *)((int)this + 0x1c8) == revealID_) &&
       (iVar3 = FUN_00d8d382((int)uVar4,0,&StateMachineState::RTTI_Type_Descriptor,
                             &DoublePassState::RTTI_Type_Descriptor,0), iVar3 == 0)) {
      if (*(int *)((int)text + 0x14) != 0) {
        pvVar2 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
        iVar3 = StateMachine_buttonPressedWithTextAndRevealID(pvVar2,extraout_EDX);
        ExceptionList = local_3fc;
        return iVar3 != 0;
      }
      pvVar2 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
      iVar3 = StateMachine_buttonPressedWithText(pvVar2,extraout_EDX_00);
      ExceptionList = local_3fc;
      return iVar3 != 0;
    }
    FUN_01360e80(revealID_);
  }
  ExceptionList = local_3fc;
  return true;
}

