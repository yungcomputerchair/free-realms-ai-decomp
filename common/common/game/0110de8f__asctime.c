// addr: 0x0110de8f
// name: _asctime
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * _asctime(void * tm) */

char * __cdecl _asctime(void *tm)

{
  int iVar1;
  void *pvVar2;
  errno_t eVar3;
  char *_Buf;
  
                    /* Visual Studio CRT asctime wrapper that obtains a per-thread/static 26-byte
                       buffer and calls _asctime_s, returning null on error. */
  _Buf = &DAT_01cb9fa0;
  iVar1 = FUN_00d90c0c();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3c) == 0) {
      pvVar2 = __calloc_crt(0x1a,1);
      *(void **)(iVar1 + 0x3c) = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0110debc;
    }
    _Buf = *(char **)(iVar1 + 0x3c);
  }
LAB_0110debc:
  eVar3 = _asctime_s(_Buf,0x1a,tm);
  return (char *)(~-(uint)(eVar3 != 0) & (uint)_Buf);
}

