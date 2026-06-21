// addr: 0x0144a9f0
// name: EventCommand_RequestEventSessionsOnDay_setFieldC
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_setFieldC(void * this, int value)
    */

void __thiscall EventCommand_RequestEventSessionsOnDay_setFieldC(void *this,int value)

{
                    /* Sets the 32-bit field at offset 0xc on an
                       EventCommand_RequestEventSessionsOnDay object. */
  *(int *)((int)this + 0xc) = value;
  return;
}

