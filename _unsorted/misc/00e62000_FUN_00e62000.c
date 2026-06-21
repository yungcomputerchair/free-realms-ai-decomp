// addr: 0x00e62000
// name: FUN_00e62000
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_00e62000(void *param_1,byte param_2)

{
  FUN_00e61fc0();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

