// addr: 0x014fb740
// name: CommandObject_UIEffect_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_UIEffect_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_UIEffect_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_UIEffect: invokes the class
                       destructor and frees this when flags request it. */
  CommandObject_UIEffect_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

