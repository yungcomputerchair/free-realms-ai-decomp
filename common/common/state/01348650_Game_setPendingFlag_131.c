// addr: 0x01348650
// name: Game_setPendingFlag_131
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setPendingFlag_131(void * this, bool enabled_) */

void __thiscall Game_setPendingFlag_131(void *this,bool enabled_)

{
                    /* Stores a byte flag at offset +0x131. It pairs with Game_getPendingFlag_131,
                       but no strings identify the exact flag semantics. */
  *(bool *)((int)this + 0x131) = enabled_;
  return;
}

