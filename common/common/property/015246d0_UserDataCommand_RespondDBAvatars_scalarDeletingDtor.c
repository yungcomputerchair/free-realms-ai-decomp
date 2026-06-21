// addr: 0x015246d0
// name: UserDataCommand_RespondDBAvatars_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondDBAvatars_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall UserDataCommand_RespondDBAvatars_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_RespondDBAvatars. It
                       invokes 015244d0 and frees this when requested. */
  UserDataCommand_RespondDBAvatars_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

