// addr: 0x012b47b0
// name: FUN_012b47b0
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_012b47b0(int param_1,uint param_2)

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
    FUN_012b40a0();
  }
  iVar1 = FUN_012b0b10(param_2);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = iVar1 + param_2 * 4;
  *(int *)(param_1 + 0xc) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

