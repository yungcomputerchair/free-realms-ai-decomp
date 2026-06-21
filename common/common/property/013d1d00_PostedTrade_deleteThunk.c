// addr: 0x013d1d00
// name: PostedTrade_deleteThunk
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PostedTrade_deleteThunk(void) */

void PostedTrade_deleteThunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Parameterless thunk that forwards to the PostedTrade scalar-deleting
                       destructor wrapper. It appears to be a compiler-generated vector/table thunk
                       rather than the primary destructor body. */
  PostedTrade_scalarDeletingDtor((void *)(in_ECX + -4),in_stack_00000004);
  return;
}

