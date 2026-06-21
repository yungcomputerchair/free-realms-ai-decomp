// addr: 0x0040d14e
// name: StdIntRange_moveBackward
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdIntRange_moveBackward(void * first, int last, int resultEnd) */

void * __cdecl StdIntRange_moveBackward(void *first,int last,int resultEnd)

{
  int iVar1;
  void *_Dst;
  
                    /* Moves a range of 4-byte elements backward so that it ends at resultEnd, using
                       _memmove_s when the range is non-empty. Returns the new destination begin
                       pointer. */
  iVar1 = last - (int)first >> 2;
  _Dst = (void *)(resultEnd + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,first,iVar1 * 4);
  }
  return _Dst;
}

