// addr: 0x012d0870
// name: Timer_getRemaining
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Timer_getRemaining(void * this) */

int __fastcall Timer_getRemaining(void *this)

{
  int local_8 [2];
  
                    /* Returns remaining time as start plus duration minus current tick, clamped at
                       zero. */
  TimeStamp_setCurrentFtime(local_8);
  local_8[0] = (*(int *)((int)this + 0x38) + *(int *)((int)this + 0x34)) - local_8[0];
  if (local_8[0] < 0) {
    local_8[0] = 0;
  }
  return local_8[0];
}

