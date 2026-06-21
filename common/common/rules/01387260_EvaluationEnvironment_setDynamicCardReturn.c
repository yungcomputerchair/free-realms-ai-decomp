// addr: 0x01387260
// name: EvaluationEnvironment_setDynamicCardReturn
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setDynamicCardReturn(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int unaff_ESI;
  int unaff_EDI;
  
                    /* Sets the dynamic-card return by storing a card/play-element id under key
                       0x21, or zero for null. */
  if (param_1 != 0) {
    uVar1 = PlayElement_getId();
    param_1 = 0x21;
    pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_EDI);
    FUN_01300680(2);
    *(undefined4 *)((int)pvVar2 + 8) = uVar1;
    return;
  }
  param_1 = 0x21;
  pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  return;
}

