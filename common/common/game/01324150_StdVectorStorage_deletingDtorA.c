// addr: 0x01324150
// name: StdVectorStorage_deletingDtorA
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorStorage_deletingDtorA(void * this, char flags) */

void * __thiscall StdVectorStorage_deletingDtorA(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor wrapper for a vector/storage triple; it invokes 01323ff0
                       and frees this when the scalar deleting-destructor flag is set. */
  puStack_8 = &LAB_016791fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01323ff0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

