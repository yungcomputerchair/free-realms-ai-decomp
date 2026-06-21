// addr: 0x01387f40
// name: EvaluationEnvironment_setReturnKey8Integer
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setReturnKey8Integer(undefined4 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Creates or fetches integer return key 8 and stores the supplied value, used
                       by draw/discard/action-play paths. Exact symbolic key name is not evident in
                       this batch. */
  local_4 = 8;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(2);
  *(undefined4 *)((int)pvVar1 + 8) = param_1;
  return;
}

