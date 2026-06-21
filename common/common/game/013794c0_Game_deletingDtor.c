// addr: 0x013794c0
// name: Game_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_deletingDtor(void * this, byte flags_) */

void * __thiscall Game_deletingDtor(void *this,byte flags_)

{
  byte in_stack_00000008;
  
                    /* Scalar deleting destructor for Game: runs the real Game destructor
                       FUN_01378020 and frees the object when the low flag bit is set. */
  Game_dtor(this);
  if ((in_stack_00000008 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

