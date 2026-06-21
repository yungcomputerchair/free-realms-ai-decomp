// addr: 0x0141f320
// name: CommandObject_EmitTextMessage_deletingDtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_EmitTextMessage_deletingDtor(void * this, char flags_) */

void * __thiscall CommandObject_EmitTextMessage_deletingDtor(void *this,char flags_)

{
                    /* Runs the CommandObject_EmitTextMessage destructor and frees this when the low
                       bit of flags is set, matching a scalar deleting destructor. */
  CommandObject_EmitTextMessage_dtor();
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

