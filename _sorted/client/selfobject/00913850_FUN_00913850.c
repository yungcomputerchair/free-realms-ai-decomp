// addr: 0x00913850
// name: FUN_00913850
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00913850(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Clears an existing linked collection, reads a count from the stream, then
                       creates/deserializes that many entries via FUN_008e9150/FUN_008e9c10. Called
                       by SelfObject_ParseFromBlob, but entry type is not identified. */
  iVar2 = *(int *)(param_2 + 4);
  while (iVar2 != 0) {
    FUN_008fbeb0(iVar2);
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
      FUN_008e9150();
      FUN_008e9c10(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

