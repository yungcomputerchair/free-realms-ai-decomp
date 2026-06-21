// addr: 0x012fd040
// name: ValueDataPolymorphicVector_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValueDataPolymorphicVector_deletingDtor(void * this, char flags) */

void * __thiscall ValueDataPolymorphicVector_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor wrapper for a vector-like object whose elements are
                       destroyed by FUN_012c2de0, then optionally frees this. */
  FUN_012c2de0();
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

