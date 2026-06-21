// addr: 0x0149d450
// name: AndNode_execute
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AndNode_execute(void * this, void * returnValue, void * env) */

bool __thiscall AndNode_execute(void *this,void *returnValue,void *env)

{
  char cVar1;
  char *pcVar2;
  undefined4 unaff_EDI;
  
                    /* Executes the left branch, logs its matching card list, then executes the
                       right branch only if the first branch matched. */
  EvaluationEnvironment_traceEnterf(env,"(gvt:And ",unaff_EDI);
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x3c))(returnValue,env);
  if (cVar1 == '\x01') {
    EvaluationEnvironment_logCardList(env,"First branch matched: ",returnValue);
    cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x3c))(returnValue,env);
    if (cVar1 == '\x01') {
      EvaluationEnvironment_logCardList(env,"Second branch matched: ",returnValue);
      pcVar2 = "true";
      goto LAB_0149d4c3;
    }
  }
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
LAB_0149d4c3:
  EvaluationEnvironment_traceExitf(env,") => %s",pcVar2);
  return (bool)cVar1;
}

