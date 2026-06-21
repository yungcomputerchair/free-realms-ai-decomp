// addr: 0x014fd950
// name: CommandObject_SendCardIntroductions_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_SendCardIntroductions_deletingDtor(void * this, char
   flags_) */

void * __thiscall CommandObject_SendCardIntroductions_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_SendCardIntroductions: runs the
                       class destructor and conditionally frees this. */
  CommandObject_SendCardIntroductions_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

