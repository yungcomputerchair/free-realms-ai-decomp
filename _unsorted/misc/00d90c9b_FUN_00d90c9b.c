// addr: 0x00d90c9b
// name: FUN_00d90c9b
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_00d90c9b(void *param_1)

{
  LONG *lpAddend;
  int *piVar1;
  LONG LVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x24));
  }
  if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x2c));
  }
  if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x34));
  }
  if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x3c));
  }
  if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x44));
  }
  if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x48));
  }
  if (*(undefined **)((int)param_1 + 0x5c) != &DAT_01b84880) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined **)((int)param_1 + 0x5c));
  }
  __lock(0xd);
  lpAddend = *(LONG **)((int)param_1 + 0x68);
  if (lpAddend != (LONG *)0x0) {
    LVar2 = InterlockedDecrement(lpAddend);
    if ((LVar2 == 0) && (lpAddend != (LONG *)&DAT_01b84088)) {
                    /* WARNING: Subroutine does not return */
      _free(lpAddend);
    }
  }
  FUN_00d90da7();
  __lock(0xc);
  piVar1 = *(int **)((int)param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    ___removelocaleref(piVar1);
    if (((piVar1 != (int *)PTR_DAT_01b84690) && (piVar1 != (int *)&DAT_01b845b8)) && (*piVar1 == 0))
    {
      FUN_00d91be9(piVar1);
    }
  }
  FUN_00d90db3();
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

