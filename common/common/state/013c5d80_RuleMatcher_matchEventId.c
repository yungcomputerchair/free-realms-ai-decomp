// addr: 0x013c5d80
// name: RuleMatcher_matchEventId
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 RuleMatcher_matchEventId(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
                    /* Checks whether two event ids are compatible: zero fails, id 1 acts as
                       wildcard, identical ids pass, otherwise it delegates to a virtual relation
                       test. Used in failed event check paths. */
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  if (((param_2 != 1) && (param_3 != 1)) && (param_2 != param_3)) {
    uVar1 = (**(code **)(*param_1 + 0x208))(param_2,param_3);
    return uVar1;
  }
  return 1;
}

