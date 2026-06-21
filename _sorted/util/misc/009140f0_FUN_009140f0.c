// addr: 0x009140f0
// name: FUN_009140f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_009140f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Deserializes or rebuilds a linked object list: clears existing entries, reads
                       a count from a bounded stream, allocates entries, and parses each. No class
                       evidence, so left unnamed. */
  iVar2 = *(int *)(param_2 + 4);
  while (iVar2 != 0) {
    FUN_008faac0(iVar2);
    iVar2 = *(int *)(param_2 + 4);
  }
  piVar1 = *(int **)(param_1 + 8) + 1;
  if (*(int **)(param_1 + 0xc) < piVar1) {
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int **)(param_1 + 8) = *(int **)(param_1 + 0xc);
  }
  else {
    iVar2 = **(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar1;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)(param_1 + 0x10) != '\0') {
        return;
      }
      FUN_008fd630();
      FUN_008fcb20(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

