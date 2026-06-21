// addr: 0x012d07b0
// name: Timer_setDuration
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Timer_setDuration(void * this, int durationMs) */

void __thiscall Timer_setDuration(void *this,int durationMs)

{
  undefined4 local_8 [2];
  
                    /* Stores a duration and, when positive, captures the current tick/time into the
                       timer start fields. */
  *(int *)((int)this + 0x20) = durationMs;
  if (0 < durationMs) {
    TimeStamp_setCurrentFtime(local_8);
    *(undefined4 *)((int)this + 0x24) = local_8[0];
    *(undefined4 *)((int)this + 0x28) = local_8[0];
  }
  return;
}

