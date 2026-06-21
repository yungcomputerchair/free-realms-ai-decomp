// addr: 0x00c67f30
// name: FUN_00c67f30
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_00c67f30(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_c = ExceptionList;
  puStack_8 = &LAB_015ffc99;
  ExceptionList = &local_c;
  *param_2 = SoeUtil::List<BackgroundTrack*,-1>::vftable;
  param_2[3] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_4 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  local_10 = 1;
  do {
    if (piVar1 == (int *)0x0) break;
    local_14 = *piVar1;
    if ((((local_14 != 0) && (*(int *)(local_14 + 0x10) != 0)) &&
        (*(char *)(*(int *)(local_14 + 0x10) + 0x4c) != '\0')) &&
       (*(int *)(*(int *)(local_14 + 0x10) + 0x20) != 0)) {
      FUN_00c67410(&local_14);
    }
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    local_14 = *piVar1;
    if (((*(char *)(local_14 + 0x14) == '\x01') && (*(int *)(local_14 + 0x10) != 0)) &&
       ((*(char *)(*(int *)(local_14 + 0x10) + 0x4c) != '\0' &&
        (*(int *)(*(int *)(local_14 + 0x10) + 0x20) != 0)))) {
      FUN_00c67410(&local_14);
    }
  }
  ExceptionList = local_c;
  return param_2;
}

