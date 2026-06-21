// addr: 0x013c5ae0
// name: RuleSetData_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RuleSetData_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall RuleSetData_evaluate(void *this,void *returnValue,void *env)

{
  char cVar1;
  char *pcVar2;
  undefined4 unaff_EDI;
  
                    /* Evaluates the root rule-set node and logs "(gvt:RuleSetData" with the boolean
                       result. */
  EvaluationEnvironment_enableDebugLogging(env);
  EvaluationEnvironment_traceEnterf(env,"(gvt:RuleSetData",unaff_EDI);
  cVar1 = (**(code **)(**(int **)((int)this + 8) + 0x3c))(returnValue,env);
  pcVar2 = "true";
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  EvaluationEnvironment_traceExitf(env,") => %s",pcVar2);
  return (bool)cVar1;
}

