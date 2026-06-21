// addr: 0x0140c660
// name: ActionRule_matchesRequiredValue
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionRule_matchesRequiredValue(int actionOrValueId_, void *
   requiredValues) */

bool ActionRule_matchesRequiredValue(int actionOrValueId_,void *requiredValues)

{
  bool bVar1;
  
                    /* Returns false when no requirement list is supplied, accepts the special id
                       0x19 unconditionally, otherwise checks whether the ValueData contains the id.
                        */
  if (requiredValues == (void *)0x0) {
    return false;
  }
  if (actionOrValueId_ == 0x19) {
    return true;
  }
  bVar1 = ValueData_containsInt(requiredValues,actionOrValueId_);
  return bVar1;
}

