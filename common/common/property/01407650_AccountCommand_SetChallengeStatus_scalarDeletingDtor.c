// addr: 0x01407650
// name: AccountCommand_SetChallengeStatus_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_SetChallengeStatus_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall AccountCommand_SetChallengeStatus_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for AccountCommand_SetChallengeStatus. It
                       invokes the real destructor and conditionally frees the object. */
  AccountCommand_SetChallengeStatus_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

