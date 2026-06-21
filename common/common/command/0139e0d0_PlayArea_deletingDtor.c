// addr: 0x0139e0d0
// name: PlayArea_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayArea_deletingDtor(void * this, char flags) */

void * __thiscall PlayArea_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for PlayArea: calls PlayArea_dtor and
                       conditionally frees this. */
  PlayArea_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

