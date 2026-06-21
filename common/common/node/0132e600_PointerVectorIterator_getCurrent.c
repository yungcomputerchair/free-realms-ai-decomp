// addr: 0x0132e600
// name: PointerVectorIterator_getCurrent
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PointerVectorIterator_getCurrent(int * iterator) */

uint __fastcall PointerVectorIterator_getCurrent(int *iterator)

{
                    /* Returns the current pointer stored in a checked vector iterator after
                       validating the iterator has a container and is not past the vector end. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*iterator + 8) <= (uint)iterator[1]) {
    FUN_00d83c2d();
    return iterator[1];
  }
  return iterator[1];
}

