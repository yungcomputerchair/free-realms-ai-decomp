// addr: 0x0132fa40
// name: FUN_0132fa40
// subsystem: common/rules/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_0132fa40(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puStack_c = &LAB_0167a8d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_004e365d(param_3,param_1);
    param_3 = param_3 + 8;
  }
  ExceptionList = local_10;
  return param_3;
}

