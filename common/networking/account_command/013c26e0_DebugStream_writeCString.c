// addr: 0x013c26e0
// name: DebugStream_writeCString
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int DebugStream_writeCString(void * stream, char * text) */

int __cdecl DebugStream_writeCString(void *stream,char *text)

{
  undefined1 local_4 [4];
  
                    /* Writes a C string such as command debug text to an output/debug stream and
                       returns a success-like value. */
  return CONCAT31((uint3)((uint)DAT_01b839d8 >> 8) ^ (uint3)((uint)local_4 >> 8),1);
}

