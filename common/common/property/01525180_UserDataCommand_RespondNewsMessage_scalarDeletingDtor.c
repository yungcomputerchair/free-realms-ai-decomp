// addr: 0x01525180
// name: UserDataCommand_RespondNewsMessage_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondNewsMessage_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall UserDataCommand_RespondNewsMessage_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_RespondNewsMessage. It
                       calls 01524f60 and conditionally frees the object. */
  UserDataCommand_RespondNewsMessage_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

