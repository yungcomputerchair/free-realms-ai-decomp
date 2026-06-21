// addr: 0x013035e0
// name: CheckedIterator_notEqual
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CheckedIterator_notEqual(int * it, int * other) */

bool __thiscall CheckedIterator_notEqual(void *this,int *it,int *other)

{
                    /* Compares two checked iterators, asserting if they do not reference the same
                       container, and returns whether their positions differ. Used as a loop
                       condition in Game.cpp logic. */
  if ((*(int *)this == 0) || (*(int *)this != *it)) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) != it[1];
}

