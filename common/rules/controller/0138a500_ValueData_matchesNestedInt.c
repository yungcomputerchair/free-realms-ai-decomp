// addr: 0x0138a500
// name: ValueData_matchesNestedInt
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_matchesNestedInt(int needle_, void * value) */

bool ValueData_matchesNestedInt(int needle_,void *value)

{
  bool bVar1;
  
                    /* Returns false unless the second ValueData has type id 2, then delegates to
                       ValueData_containsInt against the first argument. */
  if (*(int *)((int)value + 4) == 2) {
    bVar1 = ValueData_containsInt(value,needle_);
    return bVar1;
  }
  return false;
}

