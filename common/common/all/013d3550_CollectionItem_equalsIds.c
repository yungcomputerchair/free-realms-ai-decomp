// addr: 0x013d3550
// name: CollectionItem_equalsIds
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionItem_equalsIds(void * this, void * other) */

bool __thiscall CollectionItem_equalsIds(void *this,void *other)

{
                    /* Compares two small collection/item id records by their three integer fields
                       at offsets 4, 8, and 0xc. */
  if ((*(int *)((int)this + 4) == *(int *)((int)other + 4)) &&
     (*(int *)((int)this + 8) == *(int *)((int)other + 8))) {
    return *(int *)((int)this + 0xc) == *(int *)((int)other + 0xc);
  }
  return false;
}

