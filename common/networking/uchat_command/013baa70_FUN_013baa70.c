// addr: 0x013baa70
// name: FUN_013baa70
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_013baa70(int param_1,uint param_2)

{
  int iVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    FUN_013ba820();
  }
  iVar1 = FUN_013b9ec0(param_2);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = iVar1 + param_2 * 4;
  *(int *)(param_1 + 0xc) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

