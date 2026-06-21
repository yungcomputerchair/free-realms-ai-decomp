// addr: 0x0133e180
// name: CWGame_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWGame_deletingDtor(void * this, char flags) */

void * __thiscall CWGame_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor wrapper for CWGame; it invokes the real CWGame
                       destructor and frees this when bit 0 of the flag is set. */
  CWGame_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

