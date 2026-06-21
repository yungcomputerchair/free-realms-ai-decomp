// addr: 0x00d8a9d8
// name: _free
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD win32Error;
  
  if (_Memory != (void *)0x0) {
    if (DAT_01cbef94 == 3) {
      __lock(4);
      iVar1 = thunk_FUN_00da164d(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_00d8aa2e();
      if (iVar1 != 0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_01bf3c5c,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_00d8e452();
      win32Error = GetLastError();
      iVar1 = CRT_mapWin32ErrorToErrno(win32Error);
      *piVar3 = iVar1;
    }
  }
  return;
}

