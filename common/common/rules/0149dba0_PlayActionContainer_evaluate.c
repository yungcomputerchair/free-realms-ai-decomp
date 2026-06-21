// addr: 0x0149dba0
// name: PlayActionContainer_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayActionContainer_evaluate(void * this, void * result, void * trace) */

bool __thiscall PlayActionContainer_evaluate(void *this,void *result,void *trace)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  void *unaff_EDI;
  char *format;
  
                    /* Evaluates a play-action container by dispatching on pile id: Target1,
                       Target2, DrawDeck, DiscardPile, or This. It temporarily redirects the current
                       target for Target2/This and writes the boolean result. */
  EvaluationEnvironment_traceEnterf(trace,"(Play action container",unaff_EDI);
  switch(*(undefined4 *)((int)this + 0x10)) {
  case 1:
    EvaluationEnvironment_tracef(trace,"pile == Target1",unaff_EDI);
    pcVar4 = *(code **)(*(int *)this + 0x54);
    goto LAB_0149dc99;
  case 2:
    EvaluationEnvironment_tracef(trace,"pile == Target2",unaff_EDI);
    pvVar2 = EvaluationEnvironment_resolveTarget(trace);
    pvVar3 = EvaluationEnvironment_resolveTarget2(trace);
    EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar3,unaff_EDI);
    pvVar3 = EvaluationEnvironment_resolveTarget2(trace);
    EvaluationEnvironment_setPlayElementId(0);
    cVar1 = (**(code **)(*(int *)this + 0x54))(trace);
    EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar2,unaff_EDI);
    EvaluationEnvironment_setPlayElementId(pvVar3);
    break;
  default:
    goto switchD_0149dbce_caseD_3;
  case 6:
    format = "pile == DrawDeck";
    goto LAB_0149dc8e;
  case 7:
    format = "pile == DiscardPile";
LAB_0149dc8e:
    EvaluationEnvironment_tracef(trace,format,unaff_EDI);
    pcVar4 = *(code **)(*(int *)this + 0x50);
LAB_0149dc99:
    cVar1 = (*pcVar4)(trace);
    break;
  case 0x11:
    EvaluationEnvironment_tracef(trace,"pile == This",unaff_EDI);
    pvVar2 = EvaluationEnvironment_resolveTarget(trace);
    pvVar3 = EvaluationEnvironment_getOriginCard(trace);
    EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar3,unaff_EDI);
    cVar1 = (**(code **)(*(int *)this + 0x54))(trace);
    EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar2,unaff_EDI);
  }
  if (cVar1 != '\0') {
    FUN_01300680(1);
    *(undefined1 *)((int)result + 8) = 1;
    EvaluationEnvironment_traceExitf(trace,") => true",unaff_EDI);
    return true;
  }
switchD_0149dbce_caseD_3:
  FUN_01300680(1);
  *(undefined1 *)((int)result + 8) = 0;
  EvaluationEnvironment_traceExitf(trace,") = false",unaff_EDI);
  return false;
}

