// addr: 0x01335340
// name: FUN_01335340
// subsystem: common/rules/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_01335340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b2bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_013347a0(param_5);
  *(undefined1 *)(param_1 + 8) = param_6;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  ExceptionList = local_c;
  return param_1;
}

