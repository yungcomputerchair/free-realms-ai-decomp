// addr: 0x0139e250
// name: PlayerPlayArea_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerPlayArea_deletingDtor(void * this, char flags) */

void * __thiscall PlayerPlayArea_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for PlayerPlayArea: runs the PlayerPlayArea
                       destructor and optionally frees this. */
  PlayerPlayArea_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

