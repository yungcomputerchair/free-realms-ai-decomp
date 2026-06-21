// addr: 0x00fbf780
// name: FUN_00fbf780
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00fbf780(char param_1)

{
  BOOL BVar1;
  int iVar2;
  
                    /* Starts or toggles a worker thread via CreateThread/PostThreadMessage, tracks
                       its thread id/handle globals, and records the requested enabled state. Exact
                       subsystem ownership is unclear. */
  if ((DAT_01cb52ad == '\0') &&
     (((param_1 != '\0' || (DAT_01cb52a0 != 0)) && (DAT_01cb52ac != param_1)))) {
    if (DAT_01cb52a0 == 0) {
      DAT_01cb52a4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_00fbf660,(LPVOID)0x0,4,
                                  &DAT_01cb52a0);
      if (DAT_01cb52a4 == (HANDLE)0x0) {
        DAT_01cb52ad = 1;
        return;
      }
      SetThreadPriority(DAT_01cb52a4,0xf);
      ResumeThread(DAT_01cb52a4);
      iVar2 = 0;
      do {
        Sleep(0);
        BVar1 = PostThreadMessageA(DAT_01cb52a0,0x402,0,0);
        if (BVar1 == 1) {
          DAT_01cb52ac = 1;
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 10);
    }
    else {
      BVar1 = PostThreadMessageA(DAT_01cb52a0,0x403 - (param_1 != '\0'),0,0);
      if (BVar1 == 1) {
        DAT_01cb52ac = param_1;
        return;
      }
    }
  }
  return;
}

