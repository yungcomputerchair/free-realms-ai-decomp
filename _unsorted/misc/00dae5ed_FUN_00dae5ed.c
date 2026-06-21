// addr: 0x00dae5ed
// name: FUN_00dae5ed
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dae5ed(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_01b84e88) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_01b84e8c) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_01b84e90) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)param_1[2]);
    }
  }
  return;
}

