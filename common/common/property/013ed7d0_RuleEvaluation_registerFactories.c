// addr: 0x013ed7d0
// name: RuleEvaluation_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RuleEvaluation_registerFactories(void) */

void RuleEvaluation_registerFactories(void)

{
                    /* Registers rule/evaluation related factories by calling
                       EvaluationEnvironment_registerFactory, another rule/evaluation factory
                       helper, and RuleSetData_registerFactory. Evidence is the named callees and
                       common startup caller. */
  EvaluationEnvironment_registerFactory();
  ReturnValueMap_registerFactory();
  RuleSetData_registerFactory();
  return;
}

