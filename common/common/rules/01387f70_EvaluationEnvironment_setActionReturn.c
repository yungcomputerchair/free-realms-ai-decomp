// addr: 0x01387f70
// name: EvaluationEnvironment_setActionReturn
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setActionReturn(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int unaff_ESI;
  int unaff_EDI;
  
                    /* Stores an action id return under key 2, or zero for null. */
  if (param_1 != 0) {
    uVar1 = FUN_01321f20();
    param_1 = 2;
    pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_EDI);
    FUN_01300680(2);
    *(undefined4 *)((int)pvVar2 + 8) = uVar1;
    return;
  }
  param_1 = 2;
  pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  return;
}

