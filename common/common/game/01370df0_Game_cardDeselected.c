// addr: 0x01370df0
// name: Game_cardDeselected
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_cardDeselected(void * this, int cardId_, int instanceId_) */

bool __thiscall Game_cardDeselected(void *this,int cardId_,int instanceId_)

{
  void *this_00;
  int iVar1;
  undefined4 extraout_EDX;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Logs a cardDeselected event with two ids and forwards it to the current
                       turn's state machine, returning the state-machine result. */
  puStack_3f8 = &LAB_01680c63;
  local_3fc = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_3f0;
  ExceptionList = &local_3fc;
  local_3f4 = 0;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xfc6);
  }
  Game_writeGameLog(this,"cardDeselected\t%d\t%d",cardId_,instanceId_);
  this_00 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  iVar1 = StateMachine_cardDeselected(this_00,extraout_EDX);
  ExceptionList = local_3fc;
  return iVar1 != 0;
}

