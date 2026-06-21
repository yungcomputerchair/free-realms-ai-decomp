// addr: 0x01301e90
// name: DraftState_getCurrentRound
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DraftState_getCurrentRound(void * this) */

int __fastcall DraftState_getCurrentRound(void *this)

{
                    /* Returns the current draft round/state value from offset 0x40. */
  return *(int *)((int)this + 0x40);
}

