// addr: 0x01330de0
// name: DwordRange_copyBackward
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordRange_copyBackward(void * first, void * last, void * dst_end) */

void * __cdecl DwordRange_copyBackward(void *first,void *last,void *dst_end)

{
  int iVar1;
  void *_Dst;
  
                    /* Copies a range of 4-byte elements into the destination ending at dst_end,
                       returning the start of the copied destination range. Uses memmove_s when the
                       source range is positive length. */
  iVar1 = (int)last - (int)first >> 2;
  _Dst = (void *)((int)dst_end + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,first,iVar1 * 4);
  }
  return _Dst;
}

