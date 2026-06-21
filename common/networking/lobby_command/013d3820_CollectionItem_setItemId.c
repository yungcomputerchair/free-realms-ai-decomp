// addr: 0x013d3820
// name: CollectionItem_setItemId
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionItem_setItemId(void * this, int itemId) */

void __thiscall CollectionItem_setItemId(void *this,int itemId)

{
                    /* Stores a CollectionItem item/id value at offset 4. */
  *(int *)((int)this + 4) = itemId;
  return;
}

