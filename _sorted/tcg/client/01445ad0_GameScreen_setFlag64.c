// addr: 0x01445ad0
// name: GameScreen_setFlag64
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameScreen_setFlag64(void * this, bool enabled_) */

void __thiscall GameScreen_setFlag64(void *this,bool enabled_)

{
                    /* Sets a single boolean byte at object offset 100. The caller lies in the TCG
                       client screen range, but no strings or vtable evidence identify the exact
                       field, so the method name is intentionally generic. */
  *(bool *)((int)this + 100) = enabled_;
  return;
}

