// addr: 0x00d91fcc
// name: FUN_00d91fcc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_00d91fcc(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((LONG *)param_1[1] != (LONG *)0x0) {
    LVar2 = InterlockedDecrement((LONG *)param_1[1]);
    if ((LVar2 == 0) && ((undefined *)param_1[1] != &DAT_01b84088)) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)param_1[1]);
    }
  }
  if (*param_1 != 0) {
    __lock(0xc);
    ___removelocaleref(*param_1);
    piVar1 = (int *)*param_1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != (int *)&DAT_01b845b8)) {
      FUN_00d91be9(piVar1);
    }
    FUN_00d92059();
  }
  *param_1 = -0x45520ff3;
  param_1[1] = -0x45520ff3;
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

