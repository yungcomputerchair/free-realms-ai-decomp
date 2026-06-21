// addr: 0x014dccd0
// name: GetTargetState_setChosenTargetId
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GetTargetState_setChosenTargetId(void * state, int targetId_) */

void __thiscall GetTargetState_setChosenTargetId(void *this,void *state,int targetId_)

{
                    /* Stores a chosen/working target id at offset 0x24 of the get-target state
                       object. */
  *(void **)((int)this + 0x24) = state;
  return;
}

