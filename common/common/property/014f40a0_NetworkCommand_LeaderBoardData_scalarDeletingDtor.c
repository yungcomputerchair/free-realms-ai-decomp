// addr: 0x014f40a0
// name: NetworkCommand_LeaderBoardData_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_LeaderBoardData_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall NetworkCommand_LeaderBoardData_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for NetworkCommand_LeaderBoardData. It calls
                       014f3e40 and optionally frees the object. */
  NetworkCommand_LeaderBoardData_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

