// addr: 0x01387510
// name: EvaluationEnvironment_setCustomNumber2Return
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setCustomNumber2Return(undefined4 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets the customnumber2 integer return in the EvaluationEnvironment. */
  local_4 = 0x1b;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar1 + 8) = param_1;
  return;
}

