// addr: 0x0133d5b0
// name: CWGame_dtorThunk
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_dtorThunk(void * this) */

void CWGame_dtorThunk(void *this)

{
  int in_ECX;
  
                    /* Tiny thunk that forwards to the CWGame scalar deleting destructor. The target
                       ultimately calls the CWGame destructor which logs 'KILLING CWGame VIA
                       DESTRUCTOR'. */
  CWGame_deletingDtor((void *)(in_ECX + -0x10),(char)this);
  return;
}

