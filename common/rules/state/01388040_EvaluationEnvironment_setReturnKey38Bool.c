// addr: 0x01388040
// name: EvaluationEnvironment_setReturnKey38Bool
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setReturnKey38Bool(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Creates or fetches return-value key 0x26, marks it as boolean ValueData, and
                       stores the supplied flag. Exact symbolic key name is not evident in this
                       batch. */
  local_4 = 0x26;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

