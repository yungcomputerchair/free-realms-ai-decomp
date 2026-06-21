// addr: 0x00d83442
// name: fast_error_exit
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl fast_error_exit(undefined4 param_1)

{
  if (DAT_01bf3310 == 1) {
    __FF_MSGBANNER();
  }
  FUN_00d9341a(param_1);
                    /* WARNING: Subroutine does not return */
  ___crtExitProcess(0xff);
}

