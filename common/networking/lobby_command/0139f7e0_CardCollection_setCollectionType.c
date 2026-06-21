// addr: 0x0139f7e0
// name: CardCollection_setCollectionType
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CardCollection_setCollectionType(void * this, int type) */

void __thiscall CardCollection_setCollectionType(void *this,int type)

{
                    /* Stores a collection type/category value at offset 0x84. */
  *(int *)((int)this + 0x84) = type;
  return;
}

