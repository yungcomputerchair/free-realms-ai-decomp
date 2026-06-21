// addr: 0x013417d0
// name: DwordRange_copyBackward2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordRange_copyBackward2(void * first, void * last, void * dst_end) */

void * __cdecl DwordRange_copyBackward2(void *first,void *last,void *dst_end)

{
  int iVar1;
  void *_Dst;
  
                    /* Copies a positive-length range of 4-byte elements ending at dst_end and
                       returns the destination start pointer. Generic backwards-copy helper. */
  iVar1 = (int)last - (int)first >> 2;
  _Dst = (void *)((int)dst_end + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,first,iVar1 * 4);
  }
  return _Dst;
}

