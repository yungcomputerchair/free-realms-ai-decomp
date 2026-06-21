// addr: 0x00d8a681
// name: _malloc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_00d8e452();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_01bf3c5c == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_00d9341a(0x1e);
                    /* WARNING: Subroutine does not return */
      ___crtExitProcess(0xff);
    }
    if (DAT_01cbef94 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_00d8a6f2:
      pvVar1 = HeapAlloc(DAT_01bf3c5c,0,dwBytes);
    }
    else if ((DAT_01cbef94 != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0))
    {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_00d8a6f2;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_01bf3d30 == 0) {
      puVar3 = (undefined4 *)FUN_00d8e452();
      *puVar3 = 0xc;
      goto LAB_00d8a720;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_00d8a720:
      puVar3 = (undefined4 *)FUN_00d8e452();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}

