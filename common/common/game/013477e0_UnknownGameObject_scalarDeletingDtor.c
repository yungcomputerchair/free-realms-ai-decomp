// addr: 0x013477e0
// name: UnknownGameObject_scalarDeletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UnknownGameObject_scalarDeletingDtor(void * this, char flags) */

void * __thiscall UnknownGameObject_scalarDeletingDtor(void *this,char flags)

{
  void *unaff_ESI;
  
                    /* Scalar deleting destructor wrapper: it calls a member destructor at 01419a20,
                       then frees this when the low flag bit is set. No class evidence appears in
                       this briefing. */
  MersenneTwister_dtor(unaff_ESI);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

