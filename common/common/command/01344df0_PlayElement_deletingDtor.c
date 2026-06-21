// addr: 0x01344df0
// name: PlayElement_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayElement_deletingDtor(void * this, char flags) */

void * __thiscall PlayElement_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for PlayElement: invokes the real destructor and
                       frees this when requested. */
  PlayElement_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

