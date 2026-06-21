// addr: 0x0150fe80
// name: ProcessEventEmissionStateForActivePlayer_canTargetPlayer
// subsystem: common/common/state
// source (binary assert): common/common/state/ProcessEventEmissionStateForActivePlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ProcessEventEmissionStateForActivePlayer_canTargetPlayer(void * this, int
   playerId_) */

bool __thiscall ProcessEventEmissionStateForActivePlayer_canTargetPlayer(void *this,int playerId_)

{
  undefined1 uVar1;
  int iVar2;
  
                    /* Same eligibility logic as ProcessEventEmissionState: accepts the stored
                       player or optional related player, otherwise delegates to mPreviousState slot
                       0x78. Evidence is ProcessEventEmissionStateForActivePlayer.cpp and
                       mPreviousState assertion. */
  if (playerId_ == *(int *)((int)this + 0x140)) {
    return true;
  }
  if ((*(int *)((int)this + 0x144) != 0) && (iVar2 = GamePlayer_getPlayerId(), playerId_ == iVar2))
  {
    return true;
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState",
                 "..\\common\\common\\state\\ProcessEventEmissionStateForActivePlayer.cpp",0x86);
  }
  uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x78))(playerId_);
  return (bool)uVar1;
}

