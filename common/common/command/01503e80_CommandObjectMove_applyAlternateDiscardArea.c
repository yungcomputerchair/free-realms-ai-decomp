// addr: 0x01503e80
// name: CommandObjectMove_applyAlternateDiscardArea
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectMove_applyAlternateDiscardArea(void * this) */

bool __fastcall CommandObjectMove_applyAlternateDiscardArea(void *this)

{
  void *this_00;
  undefined1 uVar1;
  void *commandObject;
  int iVar2;
  int extraout_EAX;
  int *piVar3;
  
                    /* Checks the move action/origin card and, if an alternate discard area is
                       found, logs it and dispatches it through the game state handler. */
  this_00 = (void *)((int)this + 0x84);
  commandObject = CommandObject_getActionFromEnvironment(this_00);
  iVar2 = FUN_01383e60();
  if (((iVar2 == 0) || (iVar2 == *(int *)((int)this + 100))) && (commandObject != (void *)0x0)) {
    unknown_commandObject_setOpcode8(commandObject);
    if (extraout_EAX != 0) {
      EvaluationEnvironment_tracef(this_00,"Found alternate discard area! %d",extraout_EAX);
      if (*(int *)((int)this + 300) != 0) {
        piVar3 = (int *)PlayElement_getGame();
        uVar1 = (**(code **)(*piVar3 + 0x48))(extraout_EAX,this_00);
        return (bool)uVar1;
      }
    }
  }
  return false;
}

