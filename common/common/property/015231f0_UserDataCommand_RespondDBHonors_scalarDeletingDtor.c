// addr: 0x015231f0
// name: UserDataCommand_RespondDBHonors_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondDBHonors_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall UserDataCommand_RespondDBHonors_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_RespondDBHonors. It
                       calls 01522ff0 and optionally frees the object. */
  UserDataCommand_RespondDBHonors_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

