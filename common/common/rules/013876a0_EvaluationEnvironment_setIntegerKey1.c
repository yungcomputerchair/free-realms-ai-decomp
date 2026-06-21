// addr: 0x013876a0
// name: EvaluationEnvironment_setIntegerKey1
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setIntegerKey1(undefined4 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets integer return key 1 in the EvaluationEnvironment return map. */
  local_4 = 1;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar1 + 8) = param_1;
  return;
}

