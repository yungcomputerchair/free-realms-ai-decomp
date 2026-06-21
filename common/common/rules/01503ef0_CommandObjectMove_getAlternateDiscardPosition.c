// addr: 0x01503ef0
// name: CommandObjectMove_getAlternateDiscardPosition
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CommandObjectMove_getAlternateDiscardPosition(void * this) */

int __fastcall CommandObjectMove_getAlternateDiscardPosition(void *this)

{
  void *commandObject;
  int extraout_EAX;
  
                    /* Returns an alternate discard-area position from the current action when
                       available, logging it, otherwise defaults to position 2. */
  commandObject = CommandObject_getActionFromEnvironment((void *)((int)this + 0x84));
  if (commandObject != (void *)0x0) {
    unknown_commandObject_setOpcode9(commandObject);
    EvaluationEnvironment_tracef
              ((void *)((int)this + 0x84),"Found alternate discard area Position! %d",extraout_EAX);
    return extraout_EAX;
  }
  return 2;
}

