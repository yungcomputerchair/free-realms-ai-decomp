// addr: 0x01315ab0
// name: CWMainController_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWMainController_deletingDtor(void * this, char flags) */

void * __thiscall CWMainController_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor wrapper for CWMainController. It calls the real
                       destructor and frees this when requested by the flag byte. */
  CWMainController_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

