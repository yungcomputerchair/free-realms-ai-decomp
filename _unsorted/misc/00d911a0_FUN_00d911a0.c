// addr: 0x00d911a0
// name: FUN_00d911a0
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_00d911a0(int param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_01bf3660;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00d91207();
    return;
  }
  piVar1 = (int *)&DAT_01bf365c;
  do {
    piVar2 = piVar1;
    if (DAT_01bf3660 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    piVar1 = DAT_01bf3660;
  } while (*DAT_01bf3660 != *(int *)(param_1 + 4));
  piVar2[1] = DAT_01bf3660[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

