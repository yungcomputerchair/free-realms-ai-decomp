// addr: 0x0153ad00
// name: _Atexit
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2005 Release */

void __cdecl _Atexit(_func_void *param_1)

{
  if (DAT_01bc2284 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_01bc2284 = DAT_01bc2284 + -1;
  *(_func_void **)(DAT_01bc2284 * 4 + 0x1cbef38) = param_1;
  return;
}

