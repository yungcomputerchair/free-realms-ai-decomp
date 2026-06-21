// addr: 0x013875a0
// name: EvaluationEnvironment_setDependentActionReturn
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setDependentActionReturn(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Creates or fetches boolean return key 0x11 and stores the supplied flag.
                       Evidence is CWActionPlayedState reading key 0x11 as dependentAction and
                       logging dependentAction: %d. */
  local_4 = 0x11;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

