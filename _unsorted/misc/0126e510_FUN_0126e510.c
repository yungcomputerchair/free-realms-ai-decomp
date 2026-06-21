// addr: 0x0126e510
// name: FUN_0126e510
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_0126e510(void *param_1,byte param_2)

{
  FUN_0126e490();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

