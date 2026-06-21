// addr: 0x0153aa49
// name: FUN_0153aa49
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_0153aa49(uint param_1)

{
  undefined4 *Comperand;
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  
  _Memory = (int *)0x0;
  do {
    Comperand = *(undefined4 **)(&DAT_01cbee20 + (param_1 % 0x3e) * 4);
    for (puVar2 = Comperand; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == param_1) {
        if (_Memory == (int *)0x0) {
          return puVar2[2];
        }
        FUN_00d91fcc(_Memory[2]);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    if (_Memory == (int *)0x0) {
      _Memory = __malloc_crt(0xc);
      if (_Memory == (int *)0x0) {
        return 0;
      }
      iVar1 = __CreateLocForCP(param_1);
      _Memory[2] = iVar1;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory[1] = param_1;
    }
    *_Memory = (int)Comperand;
    puVar2 = (undefined4 *)
             InterlockedCompareExchange
                       ((LONG *)(&DAT_01cbee20 + (param_1 % 0x3e) * 4),(LONG)_Memory,(LONG)Comperand
                       );
    if (puVar2 == Comperand) {
      return _Memory[2];
    }
  } while( true );
}

