// addr: 0x00c675e0
// name: FUN_00c675e0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c675e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  piVar2 = *(int **)(param_1 + 0xc);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      FUN_00c67410(&param_2);
      return;
    }
    if ((*(int *)(*piVar2 + 8) <= *(int *)(param_2 + 8)) ||
       ((*(int *)(param_2 + 8) == 2 &&
        (((iVar1 = *(int *)(*piVar2 + 0x10), iVar1 == 0 || (*(char *)(iVar1 + 0x4c) == '\0')) ||
         (*(int *)(iVar1 + 0x20) == 0)))))) break;
    piVar2 = (int *)piVar2[1];
  }
  FUN_00c674a0(piVar2,&param_2);
  return;
}

