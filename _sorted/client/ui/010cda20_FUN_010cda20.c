// addr: 0x010cda20
// name: FUN_010cda20
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_010cda20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Finds a child/control pointer in an array and returns its index, with
                       defensive capacity/count adjustment along the way. Exact container class is
                       unknown. */
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = 1;
    do {
      iVar2 = *(int *)(param_1 + 0x10);
      if (((iVar2 <= iVar3) && (iVar2 < iVar4)) && (iVar2 <= iVar4 + -1)) {
        if (*(int *)(param_1 + 0x14) < iVar4) {
          FUN_00835f70(iVar4,0);
        }
        *(int *)(param_1 + 0x10) = iVar4;
      }
      if (*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return -1;
}

