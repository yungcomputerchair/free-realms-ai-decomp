// addr: 0x01332c00
// name: StdVectorStorage_deletingDtorD
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorStorage_deletingDtorD(void * this, char flags) */

void * __thiscall StdVectorStorage_deletingDtorD(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor wrapper for the storage cleaned by 013323d0; frees the
                       object itself when the scalar deleting-destructor flag is set. */
  puStack_8 = &LAB_0167ae7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013323d0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

