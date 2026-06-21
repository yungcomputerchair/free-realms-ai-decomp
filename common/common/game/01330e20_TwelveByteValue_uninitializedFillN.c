// addr: 0x01330e20
// name: TwelveByteValue_uninitializedFillN
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TwelveByteValue_uninitializedFillN(void * dst, int count, void * value)
    */

void __cdecl TwelveByteValue_uninitializedFillN(void *dst,int count,void *value)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Repeatedly copy-constructs count 12-byte values from a single source value
                       into consecutive destination slots. The element helper copies three dwords.
                        */
  puStack_c = &LAB_0167a9c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; count != 0; count = count + -1) {
    StdCopyConstruct_12bytes_ifNonNull(dst,value);
    dst = (void *)((int)dst + 0xc);
  }
  ExceptionList = local_10;
  return;
}

