// addr: 0x01423b20
// name: MacroNodeMapIterator_getValuePtr
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MacroNodeMapIterator_getValuePtr(int * iterator) */

int __fastcall MacroNodeMapIterator_getValuePtr(int *iterator)

{
                    /* Dereferences a checked map/tree iterator used by MacroNode and returns the
                       stored value payload at node+0xc. It asserts on a null container or the
                       end/sentinel node. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  if (iterator[1] == *(int *)(*iterator + 4)) {
    FUN_00d83c2d();
  }
  return iterator[1] + 0xc;
}

