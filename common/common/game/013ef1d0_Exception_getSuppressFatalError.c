// addr: 0x013ef1d0
// name: Exception_getSuppressFatalError
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Exception_getSuppressFatalError(void * this) */

bool __fastcall Exception_getSuppressFatalError(void *this)

{
                    /* Returns the byte flag at +0x60. Game_sendExceptionToPlayer sends a
                       fatal-error command only when this flag is false. */
  return (bool)*(undefined1 *)((int)this + 0x60);
}

