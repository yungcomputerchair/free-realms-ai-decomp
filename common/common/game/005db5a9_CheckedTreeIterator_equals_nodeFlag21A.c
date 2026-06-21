// addr: 0x005db5a9
// name: CheckedTreeIterator_equals_nodeFlag21A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedTreeIterator_equals_nodeFlag21A(void * this, void * other) */

bool __thiscall CheckedTreeIterator_equals_nodeFlag21A(void *this,void *other)

{
                    /* Validates two checked tree iterators share the same container, then compares
                       current nodes. This variant belongs to tree nodes with sentinel flag byte
                       +0x21. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return (bool)('\x01' - (*(int *)((int)this + 4) != *(int *)((int)other + 4)));
}

