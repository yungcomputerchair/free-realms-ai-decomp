// addr: 0x0149dd30
// name: ActionPlayNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionPlayNode_evaluate(void * this, void * trace) */

bool ActionPlayNode_evaluate(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for ActionPlayNode that logs '(gvt:ActionPlayNode' and
                       returns false. */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:ActionPlayNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => false",pvVar1);
  return false;
}

