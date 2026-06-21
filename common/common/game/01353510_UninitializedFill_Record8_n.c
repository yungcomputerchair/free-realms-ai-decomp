// addr: 0x01353510
// name: UninitializedFill_Record8_n
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UninitializedFill_Record8_n(char * dest, int count, void * value) */

void __cdecl UninitializedFill_Record8_n(char *dest,int count,void *value)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Constructs count copies of an 8-byte record into consecutive destination
                       storage by repeatedly invoking the 8-byte copy helper. This is an
                       uninitialized fill_n-style template helper. */
  puStack_c = &LAB_0167d7a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; count != 0; count = count + -1) {
    StdCopyConstruct_8bytes_ifNonNull(dest,value);
    dest = dest + 8;
  }
  ExceptionList = local_10;
  return;
}

