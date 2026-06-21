// addr: 0x012da190
// name: FUN_012da190
// subsystem: common/rules/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012da190(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *local_8;
  int local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  PropertyIntTree_lowerBound2((void *)(param_1 + 0x24),&local_8,&param_2);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((void *)(param_1 + 0x24) != local_8) {
    FUN_00d83c2d();
  }
  if (iVar1 != local_4) {
    if (local_8 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)((int)local_8 + 4)) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)(local_4 + 0x18);
    if (uVar2 < *(uint *)(local_4 + 0x14)) {
      FUN_00d83c2d();
    }
    uVar3 = *(uint *)(local_4 + 0x14);
    if (*(uint *)(local_4 + 0x18) < uVar3) {
      FUN_00d83c2d();
    }
    FUN_012a9f10(&local_8,local_4 + 0x10,uVar3,local_4 + 0x10,uVar2);
  }
  return;
}

