// addr: 0x00a4b190
// name: FUN_00a4b190
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a4b190(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar4 = (int *)(**(code **)(*param_2 + 0xc))();
  iVar1 = param_1[0xb] + *piVar4 * 0x24;
  iVar5 = *(int *)(iVar1 + 8) + 1;
  if (*(int *)(iVar1 + 0xc) < iVar5) {
    FUN_00a473f0(iVar5,0);
  }
  puVar2 = (undefined4 *)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) * 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_2;
  }
  pcVar3 = *(code **)(*param_2 + 0x40);
  param_2[4] = *param_1;
  (*pcVar3)(param_1[1],param_1 + 4);
  return;
}

