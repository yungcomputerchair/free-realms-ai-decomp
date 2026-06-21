// addr: 0x013a0030
// name: TreeIterator_notEqual
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int TreeIterator_notEqual(void * this, void * other) */

int __thiscall TreeIterator_notEqual(void *this,void *other)

{
                    /* Compares two checked tree/map iterators for inequality after verifying they
                       share the same container. SendInstances uses it as its main map traversal
                       loop condition. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),
                  *(int *)((int)this + 4) != *(int *)((int)other + 4));
}

