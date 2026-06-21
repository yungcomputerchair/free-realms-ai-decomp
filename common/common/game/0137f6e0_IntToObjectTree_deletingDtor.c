// addr: 0x0137f6e0
// name: IntToObjectTree_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntToObjectTree_deletingDtor(void * this, byte flags_) */

void * __thiscall IntToObjectTree_deletingDtor(void *this,byte flags_)

{
                    /* Scalar deleting destructor for an IntToObjectTree-like helper: runs
                       IntToObjectTree_dtor and frees this when requested. */
  IntToObjectTree_dtor((int)this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

