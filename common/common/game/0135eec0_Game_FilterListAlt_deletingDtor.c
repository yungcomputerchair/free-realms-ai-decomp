// addr: 0x0135eec0
// name: Game_FilterListAlt_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_FilterListAlt_deletingDtor(void * this, byte flags) */

void * __thiscall Game_FilterListAlt_deletingDtor(void *this,byte flags)

{
                    /* Scalar deleting destructor wrapper: runs FUN_0135cc00 and conditionally frees
                       this. It appears to be a second closely related game list/filter helper. */
  VectorBuffer8_memberDtorAt0c_B(this);
  if ((flags & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

