// addr: 0x013144e0
// name: CWMainController_dtorThunk
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWMainController_dtorThunk(void * this) */

void CWMainController_dtorThunk(void *this)

{
  int in_ECX;
  
                    /* Tiny thunk that forwards directly to the CWMainController deleting destructor
                       wrapper. The target destructor sets CWMainController::vftable. */
  CWMainController_deletingDtor((void *)(in_ECX + -0x10),(char)this);
  return;
}

