// addr: 0x010cd7d0
// name: FUN_010cd7d0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_010cd7d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* Appends a child/control pointer to an array, growing capacity when needed,
                       and stores the parent/back-pointer at child+4. Exact UI container class is
                       unknown. */
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  if (*(int *)(param_1 + 0x14) < iVar2) {
    FUN_00835f70(iVar2,0);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    *(int *)(param_2 + 4) = param_1;
    return;
  }
  *(int *)(param_2 + 4) = param_1;
  return;
}

