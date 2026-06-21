// addr: 0x01301e80
// name: DraftState_setCurrentRound
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DraftState_setCurrentRound(void * this, int round) */

void __thiscall DraftState_setCurrentRound(void *this,int round)

{
                    /* Stores the current draft round/state value at offset 0x40. */
  *(int *)((int)this + 0x40) = round;
  return;
}

