// addr: 0x013c5dc0
// name: RuleMatcher_matchPhaseId
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 RuleMatcher_matchPhaseId(undefined4 param_1,int param_2,int param_3)

{
                    /* Checks whether two phase ids are compatible: nonzero ids pass when equal or
                       when either id is the wildcard phase 0x1b. Used in failed phase check paths.
                        */
  if (((param_2 != 0) && (param_3 != 0)) &&
     ((param_2 == param_3 || ((param_2 == 0x1b || (param_3 == 0x1b)))))) {
    return 1;
  }
  return 0;
}

