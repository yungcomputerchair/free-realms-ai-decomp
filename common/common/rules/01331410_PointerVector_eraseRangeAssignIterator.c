// addr: 0x01331410
// name: PointerVector_eraseRangeAssignIterator
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_eraseRangeAssignIterator(void * vector, void * outIterator,
   void * first, void * newEnd, void * last, void * oldEnd) */

void __thiscall
PointerVector_eraseRangeAssignIterator
          (void *this,void *vector,void *outIterator,void *first,void *newEnd,void *last,
          void *oldEnd)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Erases a range from a pointer vector by memmoving the tail down, updating
                       end, and returning an iterator pair in outIterator. */
  if ((outIterator == (void *)0x0) || (outIterator != newEnd)) {
    FUN_00d83c2d();
  }
  if (first != last) {
    iVar1 = *(int *)((int)this + 8) - (int)last >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      _memmove_s(first,_DstSize,last,_DstSize);
    }
    *(void **)((int)this + 8) = (void *)(_DstSize + (int)first);
  }
  *(void **)((int)vector + 4) = first;
  *(void **)vector = outIterator;
  return;
}

