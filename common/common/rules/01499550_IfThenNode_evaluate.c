// addr: 0x01499550
// name: IfThenNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool IfThenNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall IfThenNode_evaluate(void *this,void *returnValue,void *env)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 unaff_EDI;
  void *pvVar5;
  
                    /* Evaluates an if/then expression, evaluating both branches in ALL mode or only
                       the selected branch otherwise. */
  EvaluationEnvironment_traceEnterf(env,"(if",unaff_EDI);
  pvVar5 = returnValue;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(returnValue,env);
  pvVar2 = EvaluationEnvironment_getAction(env);
  if (pvVar2 == (void *)0x3) {
    EvaluationEnvironment_tracef
              (env,"In an ALL evaluation state, evaluating both sides of the if/then.",pvVar5);
    cVar1 = '\x01';
    (**(code **)(**(int **)((int)this + 0x20) + 0x38))(returnValue,env);
    (**(code **)(**(int **)((int)this + 0x24) + 0x38))(returnValue,env);
    pcVar3 = "true";
  }
  else {
    if (cVar1 == '\x01') {
      EvaluationEnvironment_tracef(env,"then",pvVar5);
      piVar4 = *(int **)((int)this + 0x20);
    }
    else {
      EvaluationEnvironment_tracef(env,"else",pvVar5);
      piVar4 = *(int **)((int)this + 0x24);
    }
    cVar1 = (**(code **)(*piVar4 + 0x38))(returnValue,env);
    if (cVar1 == '\0') {
      pcVar3 = "false";
    }
    else {
      pcVar3 = "true";
    }
  }
  EvaluationEnvironment_traceExitf(env,") => %s",pcVar3);
  return (bool)cVar1;
}

