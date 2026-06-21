// addr: 0x01375464
// name: Game_dumpEpilogue
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Game_dumpEpilogue(void) */

void Game_dumpEpilogue(void)

{
  int unaff_EBP;
  void *unaff_ESI;
  int *unaff_EDI;
  
                    /* Exception-cleanup fragment for game dumping that writes 'Ending Game' and
                       closes the debug stream section. */
  DebugStream_writeCString(unaff_ESI,"Ending Game\n");
  (**(code **)(*unaff_EDI + 0xc))();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

