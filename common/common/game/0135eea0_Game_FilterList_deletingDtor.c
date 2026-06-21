// addr: 0x0135eea0
// name: Game_FilterList_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_FilterList_deletingDtor(void * this, byte flags) */

void * __thiscall Game_FilterList_deletingDtor(void *this,byte flags)

{
                    /* Scalar deleting destructor wrapper: runs FUN_0135cbb0 on the object and frees
                       this when the low flag bit is set. The concrete list/filter type is not
                       evident. */
  VectorBuffer8_memberDtorAt0c_A(this);
  if ((flags & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

