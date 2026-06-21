// addr: 0x00da007c
// name: FUN_00da007c
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00da007c(void)

{
  LPCSTR lpMultiByteStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  LPWSTR local_8;
  
  local_8 = (LPWSTR)0x0;
  lpMultiByteStr = (LPCSTR)*DAT_01bf32d0;
  puVar2 = DAT_01bf32d0;
  while( true ) {
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
    _Count = MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,2), local_8 == (LPWSTR)0x0)) {
      return 0xffffffff;
    }
    iVar1 = MultiByteToWideChar(0,0,(LPCSTR)*puVar2,-1,local_8,_Count);
    if (iVar1 == 0) break;
    iVar1 = FUN_00da36c8(&local_8,0);
    if (iVar1 < 0) {
      if (local_8 == (LPWSTR)0x0) {
        return 0xffffffff;
      }
      break;
    }
    puVar2 = puVar2 + 1;
    lpMultiByteStr = (LPCSTR)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}

