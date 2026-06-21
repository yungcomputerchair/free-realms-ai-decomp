// addr: 0x01496b50
// name: MoveActionNode_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MoveActionNode_evaluate(void * this, void * trace) */

bool MoveActionNode_evaluateTrace(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for MoveActionNode that logs '(gvt:MoveActionNode' and
                       returns true. [QA: writes "(gvt:MoveActionNode) => true" evaluation trace;
                       sibling of MoveActionNode_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:MoveActionNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => true",pvVar1);
  return true;
}

