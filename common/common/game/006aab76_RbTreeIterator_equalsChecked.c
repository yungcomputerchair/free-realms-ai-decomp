// addr: 0x006aab76
// name: RbTreeIterator_equalsChecked
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RbTreeIterator_equalsChecked(void * this, void * other) */

bool __thiscall RbTreeIterator_equalsChecked(void *this,void *other)

{
                    /* Compares two tree iterators after validating that both belong to the same
                       non-null tree. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return (bool)('\x01' - (*(int *)((int)this + 4) != *(int *)((int)other + 4)));
}

