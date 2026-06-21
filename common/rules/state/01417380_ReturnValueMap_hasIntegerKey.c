// addr: 0x01417380
// name: ReturnValueMap_hasIntegerKey
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ReturnValueMap_hasIntegerKey(void *param_1,int param_2)

{
  void *pvVar1;
  
                    /* Tests whether a return key exists and is an integer ValueData. Evidence is
                       many callers immediately asserting strings like
                       returnValueMap->hasIntegerKey(kPlayerReturn). */
  pvVar1 = ReturnValueMap_findValueData(param_1,param_2);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 4) == 2)) {
    return 1;
  }
  return 0;
}

