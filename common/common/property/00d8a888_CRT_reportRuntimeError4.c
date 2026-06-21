// addr: 0x00d8a888
// name: CRT_reportRuntimeError4
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CRT_reportRuntimeError4(void) */

void CRT_reportRuntimeError4(void)

{
                    /* Small CRT helper that reports runtime error code 4 via the shared
                       runtime-error routine. Evidence: body only calls FUN_00d936b1(4) and is
                       reached from another CRT helper. */
  FUN_00d936b1(4);
  return;
}

