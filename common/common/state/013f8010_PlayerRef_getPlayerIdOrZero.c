// addr: 0x013f8010
// name: PlayerRef_getPlayerIdOrZero
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PlayerRef_getPlayerIdOrZero(void * this) */

int __fastcall PlayerRef_getPlayerIdOrZero(void *this)

{
  int iVar1;
  
                    /* If field +8 is non-null, returns the associated GamePlayer id via
                       GamePlayer_getPlayerId; otherwise returns 0. Evidence is the identified
                       callee and null guard. */
  if (*(int *)((int)this + 8) != 0) {
    iVar1 = GamePlayer_getPlayerId();
    return iVar1;
  }
  return 0;
}

