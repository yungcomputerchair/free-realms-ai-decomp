// addr: 0x00d95263
// name: __setargv
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_01cc00d8 == 0) {
    ___initmbctable();
  }
  DAT_01bf3c54 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_01bf3b50,0x104);
  _DAT_01bf32e0 = &DAT_01bf3b50;
  if ((DAT_01cc00c8 == (char *)0x0) || (local_8 = DAT_01cc00c8, *DAT_01cc00c8 == '\0')) {
    local_8 = &DAT_01bf3b50;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_01bf32c4 = local_c - 1;
      _DAT_01bf32c8 = pvVar1;
      return 0;
    }
  }
  return -1;
}

