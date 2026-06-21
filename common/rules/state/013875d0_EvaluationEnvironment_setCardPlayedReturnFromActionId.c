// addr: 0x013875d0
// name: EvaluationEnvironment_setCardPlayedReturnFromActionId
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setCardPlayedReturnFromActionId(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int unaff_ESI;
  int unaff_EDI;
  
                    /* Sets integer return key 3 (kCardPlayedReturn) to a card id derived from the
                       supplied action id, or 0 when no action id is provided. Evidence is key 3
                       matching kCardPlayedReturn in surrounding return-map asserts. */
  if (param_1 != 0) {
    uVar1 = FUN_01321f20();
    param_1 = 3;
    pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_EDI);
    FUN_01300680(2);
    *(undefined4 *)((int)pvVar2 + 8) = uVar1;
    return;
  }
  param_1 = 3;
  pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  return;
}

