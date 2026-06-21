// addr: 0x013871c0
// name: EvaluationEnvironment_setTargetGottenReturn
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setTargetGottenReturn(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets boolean return key 0x23, used when a target has been gotten or target
                       selection is canceled/complete. */
  local_4 = 0x23;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

