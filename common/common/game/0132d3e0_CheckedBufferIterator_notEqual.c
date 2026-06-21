// addr: 0x0132d3e0
// name: CheckedBufferIterator_notEqual
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedBufferIterator_notEqual(int * it, int * other) */

bool __thiscall CheckedBufferIterator_notEqual(void *this,int *it,int *other)

{
                    /* Compares two checked buffer iterators/cursors, asserting if their owner
                       pointers differ, then returns whether their offsets differ. Used as a loop
                       condition in Game.cpp logic. */
  if ((*(int *)this == 0) || (*(int *)this != *it)) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) != it[1];
}

