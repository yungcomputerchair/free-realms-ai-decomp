// addr: 0x00e58090
// name: StringUtil_vsnprintf
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringUtil_vsnprintf(char * buffer, uint size, char * format, undefined4)
    */

void __cdecl StringUtil_vsnprintf(char *buffer,uint size,char *format,undefined4 param_4)

{
                    /* Small varargs wrapper around __vsnprintf that writes formatted text to the
                       caller-supplied buffer. */
  __vsnprintf(buffer,size,format,&param_4);
  return;
}

