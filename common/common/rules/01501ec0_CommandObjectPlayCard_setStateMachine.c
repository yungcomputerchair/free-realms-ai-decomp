// addr: 0x01501ec0
// name: CommandObjectPlayCard_setStateMachine
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPlayCard_setStateMachine(void * command, void *
   stateMachine) */

void __thiscall CommandObjectPlayCard_setStateMachine(void *this,void *command,void *stateMachine)

{
                    /* Stores the current state-machine pointer/id at offset 0x11c in a
                       CommandObjectPlayCard-like command object. */
  *(void **)((int)this + 0x11c) = command;
  return;
}

