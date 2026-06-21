// addr: 0x01268ac0
// name: CheckedIndexIterator_getIndex
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CheckedIndexIterator_getIndex(void * this) */

int __fastcall CheckedIndexIterator_getIndex(void *this)

{
                    /* Validates a checked index iterator against its container size and returns the
                       current index. */
  if (*(int *)this == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)this + 8) <= *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
    return *(int *)((int)this + 4);
  }
  return *(uint *)((int)this + 4);
}

