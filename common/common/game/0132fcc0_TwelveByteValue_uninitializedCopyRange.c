// addr: 0x0132fcc0
// name: TwelveByteValue_uninitializedCopyRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TwelveByteValue_uninitializedCopyRange(void * first, void * last, void
   * dst) */

void * __cdecl TwelveByteValue_uninitializedCopyRange(void *first,void *last,void *dst)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies a range of 12-byte trivially copyable values into uninitialized
                       destination storage, advancing both source and destination by 0xc. The
                       element copy helper copies three dwords. */
  puStack_c = &LAB_0167a8f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; first != last; first = (void *)((int)first + 0xc)) {
    StdCopyConstruct_12bytes_ifNonNull(dst,first);
    dst = (void *)((int)dst + 0xc);
  }
  ExceptionList = local_10;
  return dst;
}

