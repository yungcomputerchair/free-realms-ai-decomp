// addr: 0x01388350
// name: EvaluationEnvironment_setSkipPayingCostsReturn
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setSkipPayingCostsReturn(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Creates or fetches boolean return key 0x2c and writes the supplied flag.
                       Evidence is CWActionPlayedState reading skipPayingCosts and related
                       action-play flows using this helper. */
  local_4 = 0x2c;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

