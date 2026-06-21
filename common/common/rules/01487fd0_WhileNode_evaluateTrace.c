// addr: 0x01487fd0
// name: WhileNode_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool WhileNode_evaluate(void * this, void * trace) */

bool WhileNode_evaluateTrace(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for a while node that logs '(gvt: while' and returns
                       false. [QA: writes "(gvt:while) => bool" evaluation trace to string builder;
                       sibling of WhileNode_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"(gvt: while",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => false",pvVar1);
  return false;
}

