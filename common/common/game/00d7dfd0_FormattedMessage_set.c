// addr: 0x00d7dfd0
// name: FormattedMessage_set
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FormattedMessage_set(void * this, int code, char * format, undefined4) */

void __cdecl FormattedMessage_set(void *this,int code,char *format,undefined4 param_4)

{
                    /* Formats a message into a fixed 0x200-byte buffer at this+4 and stores an
                       associated code/status at this+0x204. */
  __vsnprintf((char *)((int)this + 4),0x200,format,&param_4);
  *(int *)((int)this + 0x204) = code;
  return;
}

