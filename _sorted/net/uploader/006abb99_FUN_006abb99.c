// addr: 0x006abb99
// name: FUN_006abb99
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_006abb99(int param_1,int *param_2)

{
  int iVar1;
  
                    /* Initializes or resets a second buffered reader/stream wrapper around a
                       supplied source, allocating a 0x2000-byte buffer and setting cursor/end
                       pointers. No class evidence is available. */
  if (param_2 == (int *)0x0) {
    FUN_006aadea();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    *(int **)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = FUN_006ab272(0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        FUN_006aadea();
        *(undefined4 *)(param_1 + 0x18) = 0;
        return 0;
      }
    }
    else {
      FUN_006aae49();
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(iVar1 + 4));
      }
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
      iVar1 = (**(code **)(*param_2 + 0x18))(*(int *)(param_1 + 8) + 8,0x2000);
      **(int **)(param_1 + 8) = (int)*(int **)(param_1 + 8) + iVar1 + 8;
    }
    iVar1 = *(int *)(param_1 + 8) + 8;
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return 1;
}

