// addr: 0x01505a80
// name: CommandObject_LoseGame_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_LoseGame_doCommand(void * this) */

bool __fastcall CommandObject_LoseGame_doCommand(void *this)

{
  void *env;
  char *formatText;
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  void *unaff_EDI;
  
                    /* Logs and executes the LoseGame command by resolving the active player/action
                       target and invoking the game-state lose method. */
  env = (void *)((int)this + 0x84);
  formatText = EvaluationEnvironment_getTargetCard(env);
  EvaluationEnvironment_logCardMessage(env,"CommandObject_LoseGame::doCommand",formatText,unaff_EDI)
  ;
  pvVar1 = EvaluationEnvironment_getTargetCard(env);
  if (pvVar1 == (void *)0x0) {
    return false;
  }
  piVar2 = EvaluationEnvironment_getTargetCard(env);
  uVar3 = (**(code **)(*piVar2 + 0x28))();
  (**(code **)(**(int **)((int)this + 0x30) + 0xb0))(uVar3,*(undefined4 *)((int)this + 0x124));
  return true;
}

