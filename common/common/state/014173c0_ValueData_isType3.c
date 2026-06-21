// addr: 0x014173c0
// name: ValueData_isType3
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_isType3(void * value) */

bool ValueData_isType3(void *value)

{
  void *pvVar1;
  void *in_ECX;
  int in_EDX;
  
                    /* Looks up/normalizes a ValueData-like object and returns true when its type
                       field equals 3. Called by PickListState_enterState. */
  pvVar1 = ReturnValueMap_findValueData(in_ECX,in_EDX);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 4) == 3)) {
    return true;
  }
  return false;
}

