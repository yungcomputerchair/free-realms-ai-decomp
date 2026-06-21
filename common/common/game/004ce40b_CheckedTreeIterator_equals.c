// addr: 0x004ce40b
// name: CheckedTreeIterator_equals
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedTreeIterator_equals(void * this, void * other) */

bool __thiscall CheckedTreeIterator_equals(void *this,void *other)

{
                    /* Validates two checked tree iterators have the same owning container, then
                       compares their current node pointers for equality. Calls the debug
                       invalid-parameter handler on mismatches. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return (bool)('\x01' - (*(int *)((int)this + 4) != *(int *)((int)other + 4)));
}

