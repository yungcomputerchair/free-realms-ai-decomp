// addr: 0x013421f0
// name: StdVectorStorage_deletingDtorG
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorStorage_deletingDtorG(void * this, char flags) */

void * __thiscall StdVectorStorage_deletingDtorG(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor wrapper for storage cleaned by 013419b0; runs the buffer
                       cleanup and conditionally frees this when the flag requests it. */
  puStack_8 = &LAB_0167c5bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013419b0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

