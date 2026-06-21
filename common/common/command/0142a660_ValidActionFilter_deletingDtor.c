// addr: 0x0142a660
// name: ValidActionFilter_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValidActionFilter_deletingDtor(void * this, char flags) */

void * __thiscall ValidActionFilter_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for ValidActionFilter; runs the real destructor and frees
                       the object when the low bit of flags is set. */
  ValidActionFilter_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

