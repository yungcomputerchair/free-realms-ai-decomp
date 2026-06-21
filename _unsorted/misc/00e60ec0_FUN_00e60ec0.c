// addr: 0x00e60ec0
// name: FUN_00e60ec0
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00e60ec0(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if (DAT_01bfdb20 != '\0') {
    if (DAT_01b861c4 != '\0') {
      cVar1 = (**(code **)(*(int *)PTR_PTR_01b861c0 + 0x10))(param_1);
      if (cVar1 != '\0') goto LAB_00e60f03;
    }
    (**(code **)(*DAT_01bfdb1c + 0x14))(param_1,param_3,param_4);
    return;
  }
LAB_00e60f03:
  if (param_1 != (void *)0x0) {
    if (DAT_01b861c4 != '\0') {
      (**(code **)(*(int *)PTR_PTR_01b861c0 + 8))(param_1,param_3,param_4);
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

