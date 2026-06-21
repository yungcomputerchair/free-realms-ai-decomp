// addr: 0x014ecf90
// name: AccountCommand_GetAccountsByPartialName_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_GetAccountsByPartialName_scalarDeletingDtor(void * this,
   char flags) */

void * __thiscall AccountCommand_GetAccountsByPartialName_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for AccountCommand_GetAccountsByPartialName.
                       It calls the real destructor at 014ecda0 and frees this when flags bit 0 is
                       set. */
  AccountCommand_GetAccountsByPartialName_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

