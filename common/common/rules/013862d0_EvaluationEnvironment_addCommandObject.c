// addr: 0x013862d0
// name: EvaluationEnvironment_addCommandObject
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_addCommandObject(void * env, void * commandObject)
    */

void __thiscall EvaluationEnvironment_addCommandObject(void *this,void *env,void *commandObject)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  
                    /* Adds a command object to either the cost or effect command list depending on
                       the current evaluation state and logs the addition. Invalid states are
                       reported with the CommandObject name and current list sizes. */
  if (env == (void *)0x0) {
    FUN_012f5a60("commandObject","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x60c);
  }
  iVar1 = CommandObject_getDurationMap();
  if (*(int *)((int)this + 0x18) == 1) {
    env = (void *)PlayElement_getId();
    FUN_0042c155(&env);
    if (*(uint *)(iVar1 + 0x18) < 0x10) {
      iVar1 = iVar1 + 4;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    EvaluationEnvironment_tracef(this,"Adding cost %s command",iVar1);
    return;
  }
  if (1 < *(int *)((int)this + 0x18) - 2U) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_logGeneral(*(void **)((int)this + 4),
                    "got to addCommandObject with no currentEvaluation Environment.",unaff_EDI);
    if (*(int *)((int)this + 0x30) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2;
    }
    if (*(int *)((int)this + 0x20) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
    }
    if (*(uint *)(iVar1 + 0x18) < 0x10) {
      iVar1 = iVar1 + 4;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    FUN_012f5dc0("Invalid state in EvaluationEnvironment::addCommandObject, CommandObject name: %s, cost objects size: %d, effect objects size %d"
                 ,iVar1,iVar3,iVar2);
    return;
  }
  env = (void *)PlayElement_getId();
  FUN_0042c155(&env);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    EvaluationEnvironment_tracef(this,"Adding effect %s command",*(undefined4 *)(iVar1 + 4));
    return;
  }
  EvaluationEnvironment_tracef(this,"Adding effect %s command",iVar1 + 4);
  return;
}

