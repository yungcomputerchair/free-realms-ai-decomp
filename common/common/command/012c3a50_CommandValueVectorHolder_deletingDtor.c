// addr: 0x012c3a50
// name: CommandValueVectorHolder_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandValueVectorHolder_deletingDtor(void * this, char flags) */

void * __thiscall CommandValueVectorHolder_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor wrapper: runs CommandValueVectorHolder_dtor and
                       frees the object when the low flag bit is set. */
  CommandValueVectorHolder_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

