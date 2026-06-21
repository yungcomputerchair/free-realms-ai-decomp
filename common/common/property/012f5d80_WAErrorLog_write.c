// addr: 0x012f5d80
// name: WAErrorLog_write
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void WAErrorLog_write(undefined4) */

void WAErrorLog_write(undefined4 param_1)

{
  undefined4 unaff_EDI;
  
                    /* Variadic forwarding wrapper that passes its argument list to FUN_012f5920,
                       the underlying logger associated with the referenced literal 'wa_error.log'.
                       It is called from many subsystems for error reporting. */
  WAErrorLog_vwrite("wa_error.log",&stack0x00000008,unaff_EDI);
  return;
}

