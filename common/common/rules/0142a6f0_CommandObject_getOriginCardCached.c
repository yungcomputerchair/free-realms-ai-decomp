// addr: 0x0142a6f0
// name: CommandObject_getOriginCardCached
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_getOriginCardCached(int param_1)

{
  void *pvVar1;
  
                    /* Returns a cached origin card for a command object, populating offset +0x64
                       from EvaluationEnvironment_getOriginCard when empty. */
  if (*(int *)(param_1 + 100) == 0) {
    pvVar1 = EvaluationEnvironment_getOriginCard((void *)(param_1 + 0x84));
    *(void **)(param_1 + 100) = pvVar1;
  }
  return *(undefined4 *)(param_1 + 100);
}

