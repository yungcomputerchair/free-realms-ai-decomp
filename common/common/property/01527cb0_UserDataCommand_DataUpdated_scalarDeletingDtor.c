// addr: 0x01527cb0
// name: UserDataCommand_DataUpdated_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_DataUpdated_scalarDeletingDtor(void * this, char flags)
    */

void * __thiscall UserDataCommand_DataUpdated_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_DataUpdated. It calls
                       01527b60 and frees this when requested. */
  UserDataCommand_DataUpdated_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

