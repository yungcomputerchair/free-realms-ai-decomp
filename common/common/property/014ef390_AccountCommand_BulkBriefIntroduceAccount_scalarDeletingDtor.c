// addr: 0x014ef390
// name: AccountCommand_BulkBriefIntroduceAccount_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_BulkBriefIntroduceAccount_scalarDeletingDtor(void *
   this, char flags) */

void * __thiscall AccountCommand_BulkBriefIntroduceAccount_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for
                       AccountCommand_BulkBriefIntroduceAccount. It invokes 014ef1c0 and frees the
                       object when the low flag bit is set. */
  AccountCommand_BulkBriefIntroduceAccount_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

