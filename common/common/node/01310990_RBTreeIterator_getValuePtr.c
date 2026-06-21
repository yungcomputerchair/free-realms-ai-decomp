// addr: 0x01310990
// name: RBTreeIterator_getValuePtr
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RBTreeIterator_getValuePtr(int * iterator) */

int __fastcall RBTreeIterator_getValuePtr(int *iterator)

{
                    /* Dereferences a checked red-black-tree iterator and returns a pointer to the
                       stored value payload at node+0xc. It asserts on null containers and on the
                       map end/sentinel node. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  if (iterator[1] == *(int *)(*iterator + 4)) {
    FUN_00d83c2d();
  }
  return iterator[1] + 0xc;
}

