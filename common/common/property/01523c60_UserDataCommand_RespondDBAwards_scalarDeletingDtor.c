// addr: 0x01523c60
// name: UserDataCommand_RespondDBAwards_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondDBAwards_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall UserDataCommand_RespondDBAwards_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_RespondDBAwards. It
                       calls 01523a60 and optionally frees this. */
  UserDataCommand_RespondDBAwards_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

