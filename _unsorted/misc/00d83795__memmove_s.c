// addr: 0x00d83795
// name: _memmove_s
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  undefined4 *puVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_00d837ea:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      puVar1 = (undefined4 *)FUN_00d8e452();
      eVar2 = 0x16;
      *puVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_00d837ea;
      }
      puVar1 = (undefined4 *)FUN_00d8e452();
      eVar2 = 0x22;
      *puVar1 = 0x22;
    }
    FUN_00d83c09(0,0,0,0,0);
  }
  return eVar2;
}

