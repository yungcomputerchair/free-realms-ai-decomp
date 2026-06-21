// addr: 0x01503e40
// name: CommandObjectMove_setMoveSourceContext
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectMove_setMoveSourceContext(void * command, int
   sourceContext_) */

void __thiscall CommandObjectMove_setMoveSourceContext(void *this,void *command,int sourceContext_)

{
                    /* Stores an additional move source/context value at offset 0x130 on
                       CommandObject_Move. */
  *(void **)((int)this + 0x130) = command;
  return;
}

