// addr: 0x00a714e0
// name: ProviderStatusData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined ** ProviderStatusData_getColumnName(undefined4 param_1)

{
                    /* Returns display/column names for a small provider status table: Provider,
                       Status, Enabled, plus an unknown fourth static string and empty/default
                       string. */
  switch(param_1) {
  case 0:
    return (undefined **)"Provider";
  case 1:
    return (undefined **)"Status";
  case 2:
    return (undefined **)"Enabled";
  case 3:
    return &PTR_LAB_01815d30;
  default:
    return (undefined **)&DAT_0180c430;
  }
}

