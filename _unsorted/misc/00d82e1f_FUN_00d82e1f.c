// addr: 0x00d82e1f
// name: FUN_00d82e1f
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00d82e1f(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}

