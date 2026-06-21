// addr: 0x005dbbad
// name: CheckedTreeIterator_equals_nodeFlag21B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedTreeIterator_equals_nodeFlag21B(void * this, void * other) */

bool __thiscall CheckedTreeIterator_equals_nodeFlag21B(void *this,void *other)

{
                    /* Validates two checked tree iterators share the same container and compares
                       node pointers. This is a second +0x21-node tree iterator instantiation. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return (bool)('\x01' - (*(int *)((int)this + 4) != *(int *)((int)other + 4)));
}

