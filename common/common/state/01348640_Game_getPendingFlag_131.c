// addr: 0x01348640
// name: Game_getPendingFlag_131
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_getPendingFlag_131(void * this) */

bool __fastcall Game_getPendingFlag_131(void *this)

{
                    /* Returns the byte flag at offset +0x131.
                       StateMachineState_shouldContinueWaiting and several game/state callers test
                       it; exact flag meaning is unknown. */
  return (bool)*(undefined1 *)((int)this + 0x131);
}

