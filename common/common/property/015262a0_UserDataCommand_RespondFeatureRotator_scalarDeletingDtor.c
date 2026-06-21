// addr: 0x015262a0
// name: UserDataCommand_RespondFeatureRotator_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondFeatureRotator_scalarDeletingDtor(void * this,
   char flags) */

void * __thiscall UserDataCommand_RespondFeatureRotator_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for UserDataCommand_RespondFeatureRotator.
                       It calls 01525fe0 and frees this when flags bit 0 is set. */
  UserDataCommand_RespondFeatureRotator_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

