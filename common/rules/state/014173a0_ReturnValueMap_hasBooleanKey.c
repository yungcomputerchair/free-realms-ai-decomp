// addr: 0x014173a0
// name: ReturnValueMap_hasBooleanKey
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ReturnValueMap_hasBooleanKey(void *param_1,int param_2)

{
  void *pvVar1;
  
                    /* Tests whether a return key exists and is a boolean ValueData. Evidence is
                       callers with strings such as returnValueMap->hasBooleanKey(kForceReturn). */
  pvVar1 = ReturnValueMap_findValueData(param_1,param_2);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 4) == 1)) {
    return 1;
  }
  return 0;
}

