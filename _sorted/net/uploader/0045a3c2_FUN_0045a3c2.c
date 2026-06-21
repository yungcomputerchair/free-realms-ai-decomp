// addr: 0x0045a3c2
// name: FUN_0045a3c2
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0045a3c2(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar3 = *(int *)((int)param_1 + 0xa0);
  if (iVar3 != 0) {
    iVar4 = *(int *)((int)param_1 + 0x98);
    puVar2 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x24) * 8);
    *puVar2 = 1;
    puVar2[1] = iVar3;
    piVar1 = (int *)(*(int *)((int)param_1 + 0x98) + 0x24);
    *piVar1 = *piVar1 + 1;
  }
  cVar5 = FUN_0045a2ad();
  if (cVar5 == '\0') {
    if (**(int **)((int)param_1 + 0x9c) == 0) {
      pvVar6 = Mem_Alloc(0x98);
      if (pvVar6 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x10) = 0;
      }
      **(undefined4 **)((int)param_1 + 0x9c) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        *(undefined1 *)((int)param_1 + 0xa8) = 1;
      }
      else {
        *(undefined ***)(*(int *)((int)param_1 + 0x9c) + 4) = &PTR_PTR_01af688c;
      }
    }
    if (**(int **)((int)param_1 + 0x9c) != 0) {
      _memcpy((void *)**(int **)((int)param_1 + 0x9c),param_1,0x98);
    }
  }
  else {
    piVar1 = *(int **)((int)param_1 + 0x9c);
    if (*piVar1 != 0) {
      if ((int *)piVar1[1] != (int *)0x0) {
        (**(code **)(*(int *)piVar1[1] + 8))(piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
    }
  }
  return;
}

