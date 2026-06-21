// addr: 0x0144aa10
// name: EventCommand_RequestEventSessionsOnDay_setField10
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_setField10(void * this, int value)
    */

void __thiscall EventCommand_RequestEventSessionsOnDay_setField10(void *this,int value)

{
                    /* Sets the 32-bit field at offset 0x10 on an
                       EventCommand_RequestEventSessionsOnDay object. */
  *(int *)((int)this + 0x10) = value;
  return;
}

