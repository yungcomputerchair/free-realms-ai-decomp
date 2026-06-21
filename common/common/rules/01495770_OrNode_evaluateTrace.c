// addr: 0x01495770
// name: OrNode_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OrNode_evaluate(void * this, void * env, void * trace) */

bool __thiscall OrNode_evaluateTrace(void *this,void *env,void *trace)

{
  char cVar1;
  char *pcVar2;
  undefined4 unaff_EDI;
  
                    /* Evaluates the left child and short-circuits; if false, evaluates the right
                       child, then logs the resulting boolean. [QA: writes "(gvt:OrNode) => bool"
                       evaluation trace; sibling of OrNode_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"(or",unaff_EDI);
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(env,trace);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(env,trace);
    if (cVar1 == '\0') {
      pcVar2 = "false";
      goto LAB_014957bc;
    }
  }
  pcVar2 = "true";
LAB_014957bc:
  EvaluationEnvironment_traceExitf(trace,") => %s",pcVar2);
  return (bool)cVar1;
}

