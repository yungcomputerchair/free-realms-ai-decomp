// addr: 0x0145c660
// name: StateMachineState_isActivePlayer
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StateMachineState_isActivePlayer(void * this, int playerId_) */

bool __thiscall StateMachineState_isActivePlayer(void *this,int playerId_)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  
                    /* Checks that mMachine exists, retrieves the active player through the
                       StateMachine/game path, and compares that player's id/pointer-derived value
                       to the supplied player. Evidence is StateMachineState.cpp line 0x62 and the
                       active-player helper calls. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  this_00 = StateMachine_getCurrentTurn(*(void **)((int)this + 8));
  uVar1 = get_field_8(this_00);
  if (uVar1 == 0) {
    return false;
  }
  iVar2 = GamePlayer_getPlayerId();
  return iVar2 == playerId_;
}

