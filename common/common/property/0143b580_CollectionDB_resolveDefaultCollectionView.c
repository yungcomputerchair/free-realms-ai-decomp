// addr: 0x0143b580
// name: CollectionDB_resolveDefaultCollectionView
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_resolveDefaultCollectionView(void * out, void * filter, void
   * view) */

void __cdecl CollectionDB_resolveDefaultCollectionView(void *out,void *filter,void *view)

{
  void *container;
  
                    /* Initializes CollectionDB, resolves the default collection, and forwards it
                       with the caller's parameters to the collection-view helper. */
  CollectionDB_initSingleton();
  CollectionDB_resolveDefaultCollection();
  Engine_ArchetypeValidator_visitValidChildren(container,out,filter,view);
  return;
}

