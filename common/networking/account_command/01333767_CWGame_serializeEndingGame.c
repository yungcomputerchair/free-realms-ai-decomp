// addr: 0x01333767
// name: CWGame_serializeEndingGame
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWGame_serializeEndingGame(void) */

void CWGame_serializeEndingGame(void)

{
  int unaff_EBP;
  int *unaff_ESI;
  void *unaff_EDI;
  
                    /* Writes the Ending Game debug line and then calls a stream vfunc to
                       finish/close the active output context. */
  DebugStream_writeCString(unaff_EDI,"Ending Game\n");
  (**(code **)(*unaff_ESI + 0xc))();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

