// addr: 0x01388010
// name: EvaluationEnvironment_setBooleanKey9
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setBooleanKey9(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets boolean return key 9 in the EvaluationEnvironment return map. */
  local_4 = 9;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

