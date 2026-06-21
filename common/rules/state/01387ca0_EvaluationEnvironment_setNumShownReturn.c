// addr: 0x01387ca0
// name: EvaluationEnvironment_setNumShownReturn
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setNumShownReturn(undefined4 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Creates or fetches integer return key 0x15 and stores the supplied value.
                       Evidence is DrawCardState asserting kNumShownReturn for key 0x15. */
  local_4 = 0x15;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar1 + 8) = param_1;
  return;
}

