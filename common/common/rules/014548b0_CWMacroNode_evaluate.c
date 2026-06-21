// addr: 0x014548b0
// name: CWMacroNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWMacroNode_evaluate(void * this, void * trace) */

bool CWMacroNode_evaluate(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for CWMacroNode that logs '(gvt:CWMacroNode' and always
                       returns true. */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:CWMacroNode",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => true",pvVar1);
  return true;
}

