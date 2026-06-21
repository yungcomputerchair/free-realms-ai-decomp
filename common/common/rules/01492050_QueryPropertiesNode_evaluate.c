// addr: 0x01492050
// name: QueryPropertiesNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryPropertiesNode_evaluate(void * this, void * trace) */

bool QueryPropertiesNode_evaluate(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for QueryPropertiesNode that logs
                       '(gvt:QueryPropertiesNode' and returns true. */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:QueryPropertiesNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => true",pvVar1);
  return true;
}

