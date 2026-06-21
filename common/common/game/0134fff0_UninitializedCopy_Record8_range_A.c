// addr: 0x0134fff0
// name: UninitializedCopy_Record8_range_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UninitializedCopy_Record8_range_A(char * first, char * last, char *
   dest) */

void * __cdecl UninitializedCopy_Record8_range_A(char *first,char *last,char *dest)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies an input range of 8-byte records into uninitialized destination
                       storage, constructing each element through the 8-byte copy helper. Returns
                       the advanced destination pointer. */
  puStack_c = &LAB_0167d3f0;
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

