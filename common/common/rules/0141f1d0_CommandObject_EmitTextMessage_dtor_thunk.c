// addr: 0x0141f1d0
// name: CommandObject_EmitTextMessage_dtor_thunk
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_EmitTextMessage_dtor_thunk(void * this) */

void CommandObject_EmitTextMessage_dtor_thunk(void *this)

{
  int in_ECX;
  
                    /* Tiny wrapper that tail-calls the deleting destructor for
                       CommandObject_EmitTextMessage. */
  CommandObject_EmitTextMessage_deletingDtor((void *)(in_ECX + -8),(char)this);
  return;
}

