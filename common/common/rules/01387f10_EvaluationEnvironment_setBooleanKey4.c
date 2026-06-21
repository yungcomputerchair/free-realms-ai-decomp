// addr: 0x01387f10
// name: EvaluationEnvironment_setBooleanKey4
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setBooleanKey4(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets boolean return key 4 in the EvaluationEnvironment return map. */
  local_4 = 4;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

