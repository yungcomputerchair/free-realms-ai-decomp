// addr: 0x015159c0
// name: CWPlayerPlayArea_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWPlayerPlayArea_deletingDtor(void * this, char flags) */

void * __thiscall CWPlayerPlayArea_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for CWPlayerPlayArea; runs the complete destructor and
                       frees this when the deleting flag is set. */
  CWPlayerPlayArea_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

