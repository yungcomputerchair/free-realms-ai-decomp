// addr: 0x01350110
// name: UninitializedCopy_Record12_range_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UninitializedCopy_Record12_range_B(char * first, char * last, char *
   dest) */

void * __cdecl UninitializedCopy_Record12_range_B(char *first,char *last,char *dest)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies a range of 12-byte records into uninitialized destination storage
                       using Record12_copy. This is a template-instantiated range helper for a
                       different 12-byte record type. */
  puStack_c = &LAB_0167d430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; first != last; first = first + 0xc) {
    Record12_copy(dest,first);
    dest = dest + 0xc;
  }
  ExceptionList = local_10;
  return dest;
}

