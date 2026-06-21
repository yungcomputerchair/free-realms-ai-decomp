// addr: 0x00d831ad
// name: CRT_exit
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CRT_exit(int code) */

void __cdecl CRT_exit(int code)

{
                    /* Thin CRT wrapper that exits the process by forwarding the code to the common
                       termination routine. Evidence: static name _exit, Visual Studio 2005 library
                       match, and direct call to the CRT termination helper. */
  FUN_00d830cb(code,0,0);
  return;
}

