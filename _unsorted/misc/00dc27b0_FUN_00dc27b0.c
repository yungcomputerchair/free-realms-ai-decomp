// addr: 0x00dc27b0
// name: FUN_00dc27b0
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_00dc27b0(void *param_1,byte param_2)

{
  FUN_00dc2020();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

