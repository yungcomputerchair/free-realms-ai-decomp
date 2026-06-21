// addr: 0x01387360
// name: FUN_01387360
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01387360(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int unaff_ESI;
  int unaff_EDI;
  
                    /* Sets a play-element id ValueData/return-map entry for key 24, creating the
                       entry if needed and storing either zero/null or an id/string payload. Exact
                       symbolic key name is not proven. */
  if (param_1 != 0) {
    uVar1 = PlayElement_getId();
    param_1 = 0x1f;
    pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_EDI);
    FUN_01300680(2);
    *(undefined4 *)((int)pvVar2 + 8) = uVar1;
    return;
  }
  param_1 = 0x1f;
  pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&param_1,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  return;
}

