// addr: 0x0132e630
// name: PointerVectorIterator_notEqual
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PointerVectorIterator_notEqual(int * lhs, int * rhs) */

bool __thiscall PointerVectorIterator_notEqual(void *this,int *lhs,int *rhs)

{
                    /* Compares two checked vector iterators for inequality after asserting they
                       belong to the same container. The boolean result is based on differing
                       current element pointers. */
  if ((*(int *)this == 0) || (*(int *)this != *lhs)) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) != lhs[1];
}

