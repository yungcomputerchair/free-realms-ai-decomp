// addr: 0x01345ed0
// name: Player_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Player_deletingDtor(void * this, char flags) */

void * __thiscall Player_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor wrapper for Player; invokes Player_dtor and frees
                       this when bit 0 of the flags byte is set. */
  Player_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

