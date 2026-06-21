// addr: 0x01493e50
// name: QueryNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryNode_evaluate(void * this, void * trace) */

bool QueryNode_evaluate(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for QueryNode that logs '(gvt:QueryNode' and returns
                       false. */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:QueryNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => false",pvVar1);
  return false;
}

