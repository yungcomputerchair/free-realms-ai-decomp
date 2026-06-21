// addr: 0x0144a9d0
// name: EventCommand_RequestEventSessionsOnDay_setField8
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_setField8(void * this, int value)
    */

void __thiscall EventCommand_RequestEventSessionsOnDay_setField8(void *this,int value)

{
                    /* Sets the 32-bit field at offset 8 on an
                       EventCommand_RequestEventSessionsOnDay object. */
  *(int *)((int)this + 8) = value;
  return;
}

