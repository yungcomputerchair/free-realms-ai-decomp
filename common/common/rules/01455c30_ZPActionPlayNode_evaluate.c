// addr: 0x01455c30
// name: ZPActionPlayNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ZPActionPlayNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall ZPActionPlayNode_evaluate(void *this,void *result,void *trace)

{
  char cVar1;
  void *pvVar2;
  int elementId_;
  void *unaff_EDI;
  undefined4 uVar3;
  
                    /* Evaluates a ZPActionPlayNode. Special pile ids for Target3PlayArea and
                       Target4PlayArea temporarily redirect the current target before applying
                       actions; other piles delegate to the play-action container evaluator. Writes
                       a boolean result. */
  EvaluationEnvironment_traceEnterf(trace,"(ZPActionPlayNode",unaff_EDI);
  if (*(int *)((int)this + 0x10) == 0x422) {
    EvaluationEnvironment_tracef(trace,"pile == Target3PlayArea",unaff_EDI);
    uVar3 = 0x36;
  }
  else {
    if (*(int *)((int)this + 0x10) != 0x423) {
      cVar1 = PlayActionContainer_evaluate(this,result,trace);
      goto LAB_01455caf;
    }
    EvaluationEnvironment_tracef(trace,"pile == Target4PlayArea",unaff_EDI);
    uVar3 = 0x37;
  }
  FUN_01383460(uVar3);
  pvVar2 = EvaluationEnvironment_getGame(trace);
  pvVar2 = find_play_element_in_maps(pvVar2,elementId_);
  EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar2,unaff_EDI);
  cVar1 = (**(code **)(*(int *)this + 0x54))(trace);
LAB_01455caf:
  if (cVar1 != '\0') {
    FUN_01300680(1);
    *(undefined1 *)((int)result + 8) = 1;
    EvaluationEnvironment_traceExitf(trace,") => true",unaff_EDI);
    return true;
  }
  FUN_01300680(1);
  *(undefined1 *)((int)result + 8) = 0;
  EvaluationEnvironment_traceExitf(trace,") = false",unaff_EDI);
  return false;
}

