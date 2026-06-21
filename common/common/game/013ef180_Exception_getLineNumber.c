// addr: 0x013ef180
// name: Exception_getLineNumber
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Exception_getLineNumber(void * this) */

int __fastcall Exception_getLineNumber(void *this)

{
                    /* Returns the exception source line stored at +0x3c. Game.cpp uses it in the
                       formatted ERROR log. */
  return *(int *)((int)this + 0x3c);
}

