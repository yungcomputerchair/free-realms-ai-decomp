// addr: 0x017475a0
// name: Chess_destroyGlobalInstance
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Chess_destroyGlobalInstance(void) */

void Chess_destroyGlobalInstance(void)

{
  Chess *_Memory;
  
                    /* Destroys the global Chess instance DAT_01bec3b0 if present by calling
                       Chess::~Chess and freeing it. Evidence is the known Chess destructor and
                       global pointer use. */
  _Memory = DAT_01bec3b0;
  if (DAT_01bec3b0 != (Chess *)0x0) {
    Chess::Chess_dtor(DAT_01bec3b0);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

