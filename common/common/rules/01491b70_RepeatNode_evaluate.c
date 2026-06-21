// addr: 0x01491b70
// name: RepeatNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RepeatNode_evaluate(void * this, void * trace) */

bool RepeatNode_evaluate(void *this,void *trace)

{
  undefined4 unaff_ESI;
  void *pvVar1;
  
  pvVar1 = trace;
                    /* Trace-only evaluator for a repeat node that logs '(gvt: repeat' and returns
                       false. */
  EvaluationEnvironment_traceEnterf(trace,"(gvt: repeat",unaff_ESI);
  EvaluationEnvironment_traceExitf(trace,") => false",pvVar1);
  return false;
}

