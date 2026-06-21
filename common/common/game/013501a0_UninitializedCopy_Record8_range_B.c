// addr: 0x013501a0
// name: UninitializedCopy_Record8_range_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UninitializedCopy_Record8_range_B(char * first, char * last, char *
   dest) */

void * __cdecl UninitializedCopy_Record8_range_B(char *first,char *last,char *dest)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies an input range of 8-byte records into uninitialized destination
                       storage and returns the advanced destination pointer. It is another
                       instantiation of the 8-byte copy helper. */
  puStack_c = &LAB_0167d450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; first != last; first = first + 8) {
    StdCopyConstruct_8bytes_ifNonNull(dest,first);
    dest = dest + 8;
  }
  ExceptionList = local_10;
  return dest;
}

