// addr: 0x0110df50
// name: FUN_0110df50
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0110df50(DWORD *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  BOOL BVar5;
  DWORD *pDVar6;
  
  FUN_00d90ac5();
  uVar2 = FUN_00d90abf();
  iVar3 = FUN_00d90aaa(uVar2);
  if (iVar3 == 0) {
    pDVar6 = param_1;
    uVar2 = FUN_00d90abf(param_1);
    iVar3 = FUN_00d90af7(uVar2,pDVar6);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(DVar4);
    }
    DVar4 = GetCurrentThreadId();
    *param_1 = DVar4;
  }
  else {
    *(DWORD *)(iVar3 + 0x54) = param_1[0x15];
    *(DWORD *)(iVar3 + 0x58) = param_1[0x16];
    *(DWORD *)(iVar3 + 4) = param_1[1];
    FUN_00d90c9b(param_1);
  }
  if (PTR_FUN_01844ccc != (undefined *)0x0) {
    BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_01844ccc);
    if (BVar5 != 0) {
      (*(code *)PTR_FUN_01844ccc)();
    }
  }
  __callthreadstartex();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

