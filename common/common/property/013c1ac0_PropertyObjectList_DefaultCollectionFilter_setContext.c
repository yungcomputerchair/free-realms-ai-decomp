// addr: 0x013c1ac0
// name: PropertyObjectList_DefaultCollectionFilter_setContext
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObjectList_DefaultCollectionFilter_setContext(void * this, void *
   context) */

void __thiscall PropertyObjectList_DefaultCollectionFilter_setContext(void *this,void *context)

{
                    /* Stores a single pointer at offset 4 for the default collection filter helper
                       used when initializing PropertyObjectList collection filtering. */
  *(void **)((int)this + 4) = context;
  return;
}

