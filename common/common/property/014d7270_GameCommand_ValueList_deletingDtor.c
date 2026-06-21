// addr: 0x014d7270
// name: GameCommand_ValueList_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_ValueList_deletingDtor(void * this, int flags) */

void * __thiscall GameCommand_ValueList_deletingDtor(void *this,int flags)

{
                    /* Scalar deleting destructor for GameCommand_ValueList. It calls
                       GameCommand_ValueList_dtor and frees this when the low flag bit is set. */
  GameCommand_ValueList_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

