// addr: 0x00da269b
// name: FUN_00da269b
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00da269b(int param_1)

{
  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) && ((*(uint *)(param_1 + 0xc) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}

