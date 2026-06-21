// addr: 0x01455fb0
// name: ZPActionNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ZPActionNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall ZPActionNode_evaluate(void *this,void *result,void *trace)

{
  bool bVar1;
  undefined4 unaff_EDI;
  
                    /* Evaluates a ZPActionNode, optionally logs/sets a force flag, delegates to the
                       contained action evaluator, and writes a boolean result. Trace strings are
                       '(ZPActionNode', 'Setting Force!', and true/false suffixes. */
  EvaluationEnvironment_traceEnterf(trace,"(ZPActionNode",unaff_EDI);
  if (*(char *)((int)this + 0x24) != '\0') {
    EvaluationEnvironment_tracef(trace,"Setting Force!",unaff_EDI);
    EvaluationEnvironment_setForceReturn(*(undefined1 *)((int)this + 0x24));
  }
  bVar1 = ActionNode_evaluate(this,result,trace);
  if (bVar1) {
    FUN_01300680(1);
    *(undefined1 *)((int)result + 8) = 1;
    EvaluationEnvironment_traceExitf(trace,") => true",unaff_EDI);
    return true;
  }
  FUN_01300680(1);
  *(undefined1 *)((int)result + 8) = 0;
  EvaluationEnvironment_traceExitf(trace,") => false",unaff_EDI);
  return false;
}

