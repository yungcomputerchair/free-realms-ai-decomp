// addr: 0x008fc960
// name: FUN_008fc960
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_008fc960(void *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  void *unaff_EDI;
  int iVar4;
  undefined4 uStack_4;
  
                    /* Clears an existing collection, reads a count, then repeatedly reads a 32-bit
                       key, creates an entry, and deserializes a pair of 32-bit fields. Entry class
                       is not identified. */
  iVar3 = *(int *)(param_2 + 8);
  while (iVar3 != 0) {
    FUN_008bfd60(iVar3);
    iVar3 = *(int *)(param_2 + 8);
  }
  piVar1 = *(int **)((int)param_1 + 8) + 1;
  if (*(int **)((int)param_1 + 0xc) < piVar1) {
    iVar3 = 0;
    *(undefined1 *)((int)param_1 + 0x10) = 1;
    *(int **)((int)param_1 + 8) = *(int **)((int)param_1 + 0xc);
  }
  else {
    iVar3 = **(int **)((int)param_1 + 8);
    *(int **)((int)param_1 + 8) = piVar1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if (*(char *)((int)param_1 + 0x10) != '\0') {
        return;
      }
      puVar2 = *(undefined4 **)((int)param_1 + 8) + 1;
      if (*(undefined4 **)((int)param_1 + 0xc) < puVar2) {
        uStack_4 = 0;
        *(undefined1 *)((int)param_1 + 0x10) = 1;
        *(undefined4 **)((int)param_1 + 8) = *(undefined4 **)((int)param_1 + 0xc);
      }
      else {
        uStack_4 = **(undefined4 **)((int)param_1 + 8);
        *(undefined4 **)((int)param_1 + 8) = puVar2;
      }
      this = (void *)FUN_008e8f60(&uStack_4);
      Stream_ReadU32Pair(this,param_1,unaff_EDI);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

