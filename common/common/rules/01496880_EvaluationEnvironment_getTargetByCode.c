// addr: 0x01496880
// name: EvaluationEnvironment_getTargetByCode
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTargetByCode(int targetCode_, void * trace) */

void * EvaluationEnvironment_getTargetByCode(int targetCode_,void *trace)

{
  int *piVar1;
  void *pvVar2;
  
                    /* Dispatches target-code values to the corresponding EvaluationEnvironment
                       target accessors; unknown codes fall back to a virtual resolver. Known cases
                       include current target, target2, last owner, dynamic card, and last played
                       card style accessors. */
  switch(targetCode_) {
  case 1:
    pvVar2 = EvaluationEnvironment_resolveTarget(trace);
    return pvVar2;
  case 2:
    pvVar2 = EvaluationEnvironment_resolveTarget2(trace);
    return pvVar2;
  default:
    piVar1 = EvaluationEnvironment_getGame(trace);
    pvVar2 = (void *)(**(code **)(*piVar1 + 0x204))(targetCode_,trace);
    return pvVar2;
  case 0x11:
    pvVar2 = EvaluationEnvironment_getOriginCard(trace);
    return pvVar2;
  case 0x2a:
    pvVar2 = (void *)FUN_01383790();
    return pvVar2;
  case 0x30:
    pvVar2 = (void *)Rules_getDynamicCardReturnCard();
    return pvVar2;
  case 0x37:
    pvVar2 = Rules_getVariable27Card(trace);
    return pvVar2;
  }
}

