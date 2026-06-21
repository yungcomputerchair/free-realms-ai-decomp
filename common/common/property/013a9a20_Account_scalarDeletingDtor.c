// addr: 0x013a9a20
// name: Account_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Account_scalarDeletingDtor(void * this, char flags) */

void * __thiscall Account_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for Account. It runs the Account
                       destructor and frees the object when the low bit of the flags argument is
                       set. */
  Account_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

