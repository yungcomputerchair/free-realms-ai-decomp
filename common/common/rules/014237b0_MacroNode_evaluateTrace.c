// addr: 0x014237b0
// name: MacroNode_evaluateTrace
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MacroNode_evaluate(void * this, void * trace) */

bool MacroNode_evaluateTrace(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for MacroNode that logs '(gvt:MacroNode' and always
                       returns true. [QA: writes "(gvt:MacroNode) => true" evaluation trace; sibling
                       of MacroNode_evaluate] */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:MacroNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => true",pvVar1);
  return true;
}

