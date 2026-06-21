// addr: 0x014dd730
// name: ActionCommand_setCardOrActionId
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionCommand_setCardOrActionId(void * this, int id_) */

void __thiscall ActionCommand_setCardOrActionId(void *this,int id_)

{
                    /* Stores a 32-bit value at offset +0x24. The caller fills it from a state field
                       at +0x120 while constructing/emitting a command; exact field name is
                       uncertain. */
  *(int *)((int)this + 0x24) = id_;
  return;
}

