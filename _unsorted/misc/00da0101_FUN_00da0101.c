// addr: 0x00da0101
// name: FUN_00da0101
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00da0101(void)

{
  int iVar1;
  undefined4 *puVar2;
  wchar_t *_Dst;
  errno_t eVar3;
  wchar_t *pwVar4;
  int iVar5;
  size_t _Count;
  
  iVar5 = 0;
  pwVar4 = DAT_01bf330c;
  if (DAT_01bf330c != (wchar_t *)0x0) {
    for (; *pwVar4 != L'\0'; pwVar4 = pwVar4 + iVar1 + 1) {
      if (*pwVar4 != L'=') {
        iVar5 = iVar5 + 1;
      }
      iVar1 = FUN_00d9cfe5(pwVar4);
    }
    puVar2 = __calloc_crt(iVar5 + 1,4);
    pwVar4 = DAT_01bf330c;
    DAT_01bf32d8 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      do {
        if (*pwVar4 == L'\0') {
                    /* WARNING: Subroutine does not return */
          _free(DAT_01bf330c);
        }
        iVar5 = FUN_00d9cfe5(pwVar4);
        _Count = iVar5 + 1;
        if (*pwVar4 != L'=') {
          _Dst = __calloc_crt(_Count,2);
          *puVar2 = _Dst;
          if (_Dst == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(DAT_01bf32d8);
          }
          eVar3 = _wcscpy_s(_Dst,_Count,pwVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar2 = puVar2 + 1;
        }
        pwVar4 = pwVar4 + _Count;
      } while( true );
    }
    DAT_01bf32d8 = (undefined4 *)0x0;
  }
  return 0xffffffff;
}

