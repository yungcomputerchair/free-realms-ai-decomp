// addr: 0x0134dc00
// name: CheckedIterator_notEqual2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedIterator_notEqual(int * lhs, int * rhs) */

bool __thiscall CheckedIterator_notEqual2(void *this,int *lhs,int *rhs)

{
                    /* Validates that both checked iterators belong to the same non-null owner, then
                       returns whether their current positions differ. The abort helper is called on
                       a null owner or mismatched owner. [QA: distinct template instantiation of
                       CheckedIterator::operator!=] */
  if ((*(int *)this == 0) || (*(int *)this != *lhs)) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) != lhs[1];
}

