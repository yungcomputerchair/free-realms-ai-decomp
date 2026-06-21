// addr: 0x0149b590
// name: EmitTextMessageNode_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EmitTextMessageNode_evaluate(void * this, void * trace) */

bool EmitTextMessageNode_evaluateTrace(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for EmitTextMessageNode that logs
                       'gvt:EmitTextMessageNode' and returns false. [QA: writes
                       "(gvt:EmitTextMessageNode) => false" evaluation trace; sibling of
                       EmitTextMessageNode_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"gvt:EmitTextMessageNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => false",pvVar1);
  return false;
}

