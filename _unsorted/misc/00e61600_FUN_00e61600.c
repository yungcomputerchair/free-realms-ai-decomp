// addr: 0x00e61600
// name: FUN_00e61600
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00e61600(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != 0) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        iVar2 = *(int *)(iVar3 + 0x14);
        *(int *)(iVar3 + 0x14) = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x18) = iVar3;
        }
        *(int *)(param_1 + 4) = iVar3;
        iVar3 = iVar2;
      } while (iVar2 != 0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}

