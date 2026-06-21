// addr: 0x015271f0
// name: UserDataCommand_RespondAdvertisement_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondAdvertisement_scalarDeletingDtor(void * this,
   char flags) */

void * __thiscall UserDataCommand_RespondAdvertisement_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_RespondAdvertisement. It
                       calls 01526fd0 and optionally frees the object. */
  UserDataCommand_RespondAdvertisement_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

