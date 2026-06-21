// addr: 0x00dae547
// name: FUN_00dae547
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00dae547(int param_1)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    _Memory = &PTR_DAT_01b83af0;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    iVar2 = __get_lc_time();
    if (iVar2 != 0) {
      FUN_00dae3b7(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory[0x2d] = (undefined *)0x1;
  }
  ppuVar1 = *(undefined ***)(param_1 + 0xd4);
  if (ppuVar1 != &PTR_DAT_01b83af0) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *(undefined ***)(param_1 + 0xd4) = _Memory;
  return 0;
}

