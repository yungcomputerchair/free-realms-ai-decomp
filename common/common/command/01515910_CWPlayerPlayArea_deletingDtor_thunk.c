// addr: 0x01515910
// name: CWPlayerPlayArea_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayerPlayArea_deletingDtor_thunk(void * this, char flags) */

void CWPlayerPlayArea_deletingDtor_thunk(void *this,char flags)

{
  int in_ECX;
  
                    /* Small thunk that forwards to the CWPlayerPlayArea deleting destructor
                       implementation. */
  CWPlayerPlayArea_deletingDtor((void *)(in_ECX + -8),(char)this);
  return;
}

