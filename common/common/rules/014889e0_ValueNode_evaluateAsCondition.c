// addr: 0x014889e0
// name: ValueNode_evaluateAsCondition
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueNode_evaluateAsCondition(void * this, void * result, void * trace)
    */

bool __thiscall ValueNode_evaluateAsCondition(void *this,void *result,void *trace)

{
  void *last;
  void *first;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Evaluates a gvt:ValueNode in a boolean context. A node type/code 0x42 is
                       logged as an always-false node and clears the result; all other values return
                       true. */
  EvaluationEnvironment_traceEnterf(trace,"(gvt:ValueNode",unaff_ESI);
  if (*(int *)((int)this + 0x24) == 0x42) {
    EvaluationEnvironment_tracef(trace,"False node, this is always false",unaff_EDI);
    last = *(void **)((int)result + 8);
    if (last < *(void **)((int)result + 4)) {
      FUN_00d83c2d();
    }
    first = *(void **)((int)result + 4);
    if (*(void **)((int)result + 8) < first) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator(result,local_8,result,first,result,last,unaff_EDI);
    EvaluationEnvironment_traceExitf(trace,") => false",unaff_EDI);
    return false;
  }
  EvaluationEnvironment_traceExitf(trace,") => true",unaff_ESI);
  return true;
}

