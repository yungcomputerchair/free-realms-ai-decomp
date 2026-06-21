// addr: 0x0045bb27
// name: DirectDraw_tryCreateInterface
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DirectDraw_tryCreateInterface(int * ddrawState) */

int __fastcall DirectDraw_tryCreateInterface(int *ddrawState)

{
  uint in_EAX;
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
                    /* Loads ddraw.dll, resolves DirectDrawCreateEx, and caches the created
                       DirectDraw interface in the two-word state block. Evidence is the
                       DirectDrawCreateEx and ddraw.dll strings. */
  if (ddrawState[1] == 0) {
    if (*ddrawState == 0) {
      hModule = LoadLibraryA("ddraw.dll");
      *ddrawState = (int)hModule;
      if (hModule == (HMODULE)0x0) {
        pFVar2 = (FARPROC)0x0;
      }
      else {
        pFVar2 = GetProcAddress(hModule,"DirectDrawCreateEx");
      }
      in_EAX = 0;
      if (pFVar2 != (FARPROC)0x0) {
        in_EAX = (*pFVar2)(0,ddrawState + 1,&DAT_017645dc,0);
        if (-1 < (int)in_EAX) goto LAB_0045bb33;
      }
    }
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
LAB_0045bb33:
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  return uVar1;
}

