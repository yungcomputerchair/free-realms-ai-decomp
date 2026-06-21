// addr: 0x0142a5b0
// name: ValidActionFilter_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidActionFilter_deletingDtor_thunk(void * this, char flags) */

void ValidActionFilter_deletingDtor_thunk(void *this,char flags)

{
  int in_ECX;
  
                    /* Small thunk for the ValidActionFilter scalar/vector deleting destructor; it
                       forwards to the deleting destructor implementation. */
  ValidActionFilter_deletingDtor((void *)(in_ECX + -8),(char)this);
  return;
}

