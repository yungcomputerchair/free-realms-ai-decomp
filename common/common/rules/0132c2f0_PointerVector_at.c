// addr: 0x0132c2f0
// name: PointerVector_at
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PointerVector_at(void * vector, int elementIndex_) */

void * __thiscall PointerVector_at(void *this,void *vector,int elementIndex_)

{
                    /* Bounds-checks a vector of 4-byte entries and returns the address of the
                       selected element slot. */
  if ((*(int *)((int)this + 4) == 0) ||
     ((void *)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2) <= vector)) {
    FUN_00d83c2d();
  }
  return (void *)(*(int *)((int)this + 4) + (int)vector * 4);
}

