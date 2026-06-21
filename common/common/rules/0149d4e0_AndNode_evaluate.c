// addr: 0x0149d4e0
// name: AndNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AndNode_evaluate(void * this, void * env, void * trace) */

bool __thiscall AndNode_evaluate(void *this,void *env,void *trace)

{
  char cVar1;
  char *pcVar2;
  undefined4 unaff_EDI;
  
                    /* Evaluates the left child, short-circuits if false, otherwise evaluates the
                       right child, then logs the resulting boolean for an And node. */
  EvaluationEnvironment_traceEnterf(trace,"(And ",unaff_EDI);
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(env,trace);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(env,trace);
  }
  pcVar2 = "true";
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  EvaluationEnvironment_traceExitf(trace,") => %s",pcVar2);
  return (bool)cVar1;
}

