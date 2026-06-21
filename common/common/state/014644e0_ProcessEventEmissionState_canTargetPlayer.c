// addr: 0x014644e0
// name: ProcessEventEmissionState_canTargetPlayer
// subsystem: common/common/state
// source (binary assert): common/common/state/ProcessEventEmissionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ProcessEventEmissionState_canTargetPlayer(void * this, int playerId_) */

bool __thiscall ProcessEventEmissionState_canTargetPlayer(void *this,int playerId_)

{
  undefined1 uVar1;
  int iVar2;
  
                    /* Returns true when the supplied player matches the state primary player field
                       or, if present, an alternate player retrieved through FUN_01344e20; otherwise
                       delegates the query to mPreviousState slot 0x78. Evidence is
                       ProcessEventEmissionState.cpp and mPreviousState assertion. */
  if (playerId_ == *(int *)((int)this + 0x140)) {
    return true;
  }
  if ((*(int *)((int)this + 0x144) != 0) && (iVar2 = GamePlayer_getPlayerId(), playerId_ == iVar2))
  {
    return true;
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\ProcessEventEmissionState.cpp",0x86);
  }
  uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x78))(playerId_);
  return (bool)uVar1;
}

