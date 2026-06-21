// addr: 0x00d823c6
// name: FUN_00d823c6
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_00d823c6(void *param_1,byte param_2)

{
  FUN_00d823b8();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

