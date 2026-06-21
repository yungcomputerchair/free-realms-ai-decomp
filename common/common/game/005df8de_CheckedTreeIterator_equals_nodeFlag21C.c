// addr: 0x005df8de
// name: CheckedTreeIterator_equals_nodeFlag21C
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedTreeIterator_equals_nodeFlag21C(void * this, void * other) */

bool __thiscall CheckedTreeIterator_equals_nodeFlag21C(void *this,void *other)

{
                    /* Checks that two tree iterators share an owner and compares their current
                       nodes. This is a third template instantiation of the checked iterator
                       equality helper. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return (bool)('\x01' - (*(int *)((int)this + 4) != *(int *)((int)other + 4)));
}

