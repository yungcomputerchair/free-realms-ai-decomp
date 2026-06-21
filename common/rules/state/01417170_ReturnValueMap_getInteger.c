// addr: 0x01417170
// name: ReturnValueMap_getInteger
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ReturnValueMap_getInteger(void *param_1,int param_2)

{
  void *pvVar1;
  
                    /* Looks up a value by return key and returns its integer payload only when the
                       ValueData type id is integer, otherwise 0. Evidence is callers with assert
                       strings such as hasIntegerKey(kPlayerReturn). */
  pvVar1 = ReturnValueMap_findValueData(param_1,param_2);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 4) == 2)) {
    return *(undefined4 *)((int)pvVar1 + 8);
  }
  return 0;
}

