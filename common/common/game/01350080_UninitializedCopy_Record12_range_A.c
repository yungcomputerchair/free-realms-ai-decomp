// addr: 0x01350080
// name: UninitializedCopy_Record12_range_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UninitializedCopy_Record12_range_A(char * first, char * last, char *
   dest) */

void * __cdecl UninitializedCopy_Record12_range_A(char *first,char *last,char *dest)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies an input range of 12-byte records into uninitialized destination
                       storage using a 12-byte copy constructor helper. Returns the advanced
                       destination pointer. */
  puStack_c = &LAB_0167d410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; first != last; first = first + 0xc) {
    StdCopyConstruct_12bytes_ifNonNull(dest,first);
    dest = dest + 0xc;
  }
  ExceptionList = local_10;
  return dest;
}

