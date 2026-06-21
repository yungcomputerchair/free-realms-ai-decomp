// addr: 0x01387e00
// name: EvaluationEnvironment_setTarget1Return
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void EvaluationEnvironment_setTarget1Return(undefined1 param_1)

{
  void *pvVar1;
  int unaff_ESI;
  undefined4 local_4;
  
                    /* Sets a boolean target-return flag for the primary target slot in the
                       EvaluationEnvironment. */
  local_4 = 5;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&local_4,unaff_ESI);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar1 + 8) = param_1;
  return;
}

