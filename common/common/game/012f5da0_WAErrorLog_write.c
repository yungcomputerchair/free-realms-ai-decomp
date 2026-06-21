// addr: 0x012f5da0
// name: WAErrorLog_write
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void WAErrorLog_write(char * fmt, undefined4) */

void __cdecl WAErrorLog_write(char *fmt,undefined4 param_2)

{
  undefined4 unaff_EDI;
  
                    /* Varargs wrapper that forwards its arguments to WAErrorLog_vwrite. The callee
                       is already named WAErrorLog_vwrite and this passes the stack varargs area. */
  WAErrorLog_vwrite(fmt,&stack0x0000000c,unaff_EDI);
  return;
}

