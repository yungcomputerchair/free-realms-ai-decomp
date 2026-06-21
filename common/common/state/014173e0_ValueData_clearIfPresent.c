// addr: 0x014173e0
// name: ValueData_clearIfPresent
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_clearIfPresent(void * value) */

bool ValueData_clearIfPresent(void *value)

{
  void *pvVar1;
  void *in_ECX;
  int in_EDX;
  
                    /* Looks up/normalizes a ValueData-like object and, if present, calls a
                       clearing/reset helper before returning true. Used by pick-list and target
                       validation code. */
  pvVar1 = ReturnValueMap_findValueData(in_ECX,in_EDX);
  if (pvVar1 != (void *)0x0) {
    FUN_013010e0(pvVar1);
    return true;
  }
  return false;
}

