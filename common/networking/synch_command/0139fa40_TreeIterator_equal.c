// addr: 0x0139fa40
// name: TreeIterator_equal
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int TreeIterator_equal(void * this, void * other) */

int __thiscall TreeIterator_equal(void *this,void *other)

{
                    /* Compares two checked tree/map iterators for equality after ensuring they
                       belong to the same non-null container. SendInstances uses it to detect an
                       empty or end iterator state. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),
                  *(int *)((int)this + 4) == *(int *)((int)other + 4));
}

