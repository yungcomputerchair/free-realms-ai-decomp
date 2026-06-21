// addr: 0x00d7fcf0
// name: FUN_00d7fcf0
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00d7fcf0(void)

{
  code *pcVar1;
  undefined4 *lpAddress;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = DAT_01bf3290;
  lpAddress = DAT_01bf328c;
  if (DAT_01bf328c == (undefined4 *)0x0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar4 = DAT_01bf3290;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *DAT_01bf328c;
    DAT_01bf328c = DAT_01bf328c + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_01bf328c = puVar2;
  VirtualFree(lpAddress,0x90,0x8000);
  if (DAT_01bf328c[4] != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)DAT_01bf328c[4]);
  }
  SetEvent((HANDLE)DAT_01bf328c[9]);
  WaitForSingleObject((HANDLE)DAT_01bf328c[8],0xffffffff);
  CloseHandle((HANDLE)DAT_01bf328c[9]);
  CloseHandle((HANDLE)DAT_01bf328c[8]);
  CloseHandle((HANDLE)DAT_01bf328c[10]);
  CloseHandle((HANDLE)DAT_01bf328c[0xb]);
  return;
}

