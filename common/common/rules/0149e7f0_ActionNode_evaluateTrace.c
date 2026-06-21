// addr: 0x0149e7f0
// name: ActionNode_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_evaluate(void * this, void * trace) */

bool ActionNode_evaluateTrace(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for ActionNode that logs '(gvt:ActionNode' and returns
                       false. [QA: writes "(gvt:ActionNode) => false" evaluation trace; sibling of
                       ActionNode_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:ActionNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => false",pvVar1);
  return false;
}

