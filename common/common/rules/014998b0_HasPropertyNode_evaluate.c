// addr: 0x014998b0
// name: HasPropertyNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool HasPropertyNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall HasPropertyNode_evaluate(void *this,void *result,void *trace)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_ESI;
  void *pvVar4;
  TypeDescriptor *pTVar5;
  
                    /* Implements the '(hasProperty %d' condition: resolves a target card from the
                       environment, asks the Card whether it has the requested property key, and
                       stores a boolean result. Logs failure when the target cannot be resolved. */
  EvaluationEnvironment_traceEnterf(trace,"(hasProperty %d",*(undefined4 *)((int)this + 0x24));
  piVar2 = EvaluationEnvironment_getGame(trace);
  pTVar5 = &Card::RTTI_Type_Descriptor;
  uVar3 = (**(code **)(*piVar2 + 0x200))
                    (*(undefined4 *)((int)this + 0x28),trace,0,&PlayElement::RTTI_Type_Descriptor,
                     &Card::RTTI_Type_Descriptor,0);
  piVar2 = (int *)FUN_00d8d382(uVar3);
  if (piVar2 == (int *)0x0) {
    pvVar4 = trace;
    EvaluationEnvironment_tracef(trace,"Couldn\'t get target %d",*(undefined4 *)((int)this + 0x28));
    EvaluationEnvironment_traceExitf(trace,") => false",pvVar4);
  }
  else {
    cVar1 = (**(code **)(*piVar2 + 0x14))(*(undefined4 *)((int)this + 0x24));
    if (cVar1 != '\0') {
      EvaluationEnvironment_traceExitf(trace,") => true",pTVar5);
      FUN_01300680(1);
      *(undefined1 *)(unaff_ESI + 8) = 1;
      return true;
    }
    EvaluationEnvironment_traceExitf(trace,") => false",pTVar5);
  }
  FUN_01300680(1);
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return false;
}

