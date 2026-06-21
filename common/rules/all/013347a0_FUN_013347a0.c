// addr: 0x013347a0
// name: FUN_013347a0
// subsystem: common/rules/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_013347a0(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b12b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  FUN_013341d0(param_2 + 1);
  ExceptionList = local_c;
  return param_1;
}

