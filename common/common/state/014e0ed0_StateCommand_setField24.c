// addr: 0x014e0ed0
// name: StateCommand_setField24
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateCommand_setField24(void * this, int value_) */

void __thiscall StateCommand_setField24(void *this,int value_)

{
                    /* Simple setter for offset +0x24 used by many state handlers, including
                       GetTargetState_buttonPressedWithString and PlayCardState paths. The shared
                       command/state object field is not named by strings. */
  *(int *)((int)this + 0x24) = value_;
  return;
}

