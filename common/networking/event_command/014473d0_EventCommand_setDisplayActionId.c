// addr: 0x014473d0
// name: EventCommand_setDisplayActionId
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_setDisplayActionId(void * this, uint displayActionId_) */

void __thiscall EventCommand_setDisplayActionId(void *this,uint displayActionId_)

{
                    /* Stores the display/action id in EventCommand's base field at +4. Evidence:
                       EventCommand ctor initializes +4 from DisplayActionManager/FUN_013a3480 and
                       EventCommand_cloneInto copies the same field. */
  *(uint *)((int)this + 4) = displayActionId_;
  return;
}

