// addr: 0x008ea0e0
// name: FUN_008ea0e0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_008ea0e0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar2 = *(int **)(param_2 + 0xc);
  piVar1 = *(int **)(param_2 + 8) + 1;
  if (piVar2 < piVar1) {
    iVar3 = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(int **)(param_2 + 8) = piVar2;
LAB_008ea10a:
    if ((int *)(*(int *)(param_2 + 8) + iVar3) <= piVar2) {
      SoeString_Assign(*(int *)(param_2 + 8),iVar3);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar3;
      goto LAB_008ea129;
    }
  }
  else {
    iVar3 = **(int **)(param_2 + 8);
    *(int **)(param_2 + 8) = piVar1;
    if (-1 < iVar3) goto LAB_008ea10a;
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(int **)(param_2 + 8) = piVar2;
LAB_008ea129:
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  return;
}

