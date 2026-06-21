// addr: 0x013874e0
// name: EvaluationEnvironment_setCustomNumberReturn
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setCustomNumberReturn(undefined4 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets the customnumber integer return in the EvaluationEnvironment. */
  local_4 = 0x16;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar1 + 8) = param_1;
  return;
}

