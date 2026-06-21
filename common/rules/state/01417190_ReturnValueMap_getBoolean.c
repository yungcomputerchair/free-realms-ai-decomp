// addr: 0x01417190
// name: ReturnValueMap_getBoolean
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall ReturnValueMap_getBoolean(void *param_1,int param_2)

{
  void *pvVar1;
  
                    /* Looks up a return key and returns its boolean payload only when the ValueData
                       type id is boolean; otherwise returns false. Evidence is paired hasBooleanKey
                       callers and type id 1 check. */
  pvVar1 = ReturnValueMap_findValueData(param_1,param_2);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 4) == 1)) {
    return *(undefined1 *)((int)pvVar1 + 8);
  }
  return 0;
}

