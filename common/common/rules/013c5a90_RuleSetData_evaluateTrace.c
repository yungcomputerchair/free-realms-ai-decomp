// addr: 0x013c5a90
// name: RuleSetData_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RuleSetData_evaluate(void * this, void * env, void * trace) */

bool __thiscall RuleSetData_evaluateTrace(void *this,void *env,void *trace)

{
  char cVar1;
  char *pcVar2;
  undefined4 unaff_EDI;
  
                    /* Traces '(RuleSetData', evaluates the child node at this+8 through virtual
                       slot 0x38, logs the boolean result, and returns it. [QA: writes "(RuleSetData
                       ...) => bool" evaluation trace; sibling of RuleSetData_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"(RuleSetData",unaff_EDI);
  cVar1 = (**(code **)(**(int **)((int)this + 8) + 0x38))(env,trace);
  pcVar2 = "true";
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  EvaluationEnvironment_traceExitf(trace,") => %s",pcVar2);
  return (bool)cVar1;
}

