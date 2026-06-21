// addr: 0x012a1430
// name: MessageDB_transformChars
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MessageDB_transformChars(char * first, char * last, char * out, void *)
    */

char * __cdecl MessageDB_transformChars(char *first,char *last,char *out,void *param_4)

{
  char cVar1;
  
                    /* Applies a character transform function to the range [first,last) and writes
                       the result to out. MessageDB search uses this with _tolower. */
  if (first == last) {
    return out;
  }
  do {
    cVar1 = (*param_4)((int)*first);
    *out = cVar1;
    first = first + 1;
    out = out + 1;
  } while (first != last);
  return out;
}

