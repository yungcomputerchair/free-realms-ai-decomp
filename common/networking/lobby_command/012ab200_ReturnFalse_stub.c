// addr: 0x012ab200
// name: ReturnFalse_stub
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int ReturnFalse_stub(void) */

int ReturnFalse_stub(void)

{
  uint in_EAX;
  
                    /* Small stub that always returns false/0. */
  return in_EAX & 0xffffff00;
}

