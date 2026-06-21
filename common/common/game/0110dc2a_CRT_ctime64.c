// addr: 0x0110dc2a
// name: CRT_ctime64
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Multiple Matches With Different Base Names
    __ctime64
    __wctime64
   
   Library: Visual Studio 2005 Release */

char * __cdecl CRT_ctime64(__time64_t *_Time)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_28 [36];
  
                    /* Visual Studio CRT ctime64/wctime64 implementation: validates the input,
                       converts to local tm, and formats it with asctime. */
  if (_Time == (__time64_t *)0x0) {
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
  }
  else if ((*(int *)((int)_Time + 4) < 1) && (*(int *)((int)_Time + 4) < 0)) {
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
  }
  else {
    iVar2 = FUN_00d8c956(local_28,_Time);
    if (iVar2 == 0) {
      pcVar3 = _asctime(local_28);
      return pcVar3;
    }
  }
  return (char *)0x0;
}

