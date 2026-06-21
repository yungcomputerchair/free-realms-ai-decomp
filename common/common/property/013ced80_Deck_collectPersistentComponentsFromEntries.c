// addr: 0x013ced80
// name: Deck_collectPersistentComponentsFromEntries
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deck_collectPersistentComponentsFromEntries(void * entries, void *
   outVector, int collectionModId) */

void Deck_collectPersistentComponentsFromEntries(void *entries,void *outVector,int collectionModId)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void **unaff_EDI;
  
                    /* Iterates deck entries, resolves each archetype, and appends the persistent
                       component pointer at archetype+4 to a pointer vector. Evidence is caller
                       Deck_collectPersistentComponents and ArchetypeDB_getArchetype with
                       PointerVector_pushBack. */
  ArchetypeDB_getInstance();
  puVar1 = *(undefined4 **)((int)entries + 8);
  if (puVar1 < *(undefined4 **)((int)entries + 4)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)entries + 4);
  iVar2 = collectionModId;
  if (*(undefined4 **)((int)entries + 8) < puVar4) {
    FUN_00d83c2d();
    iVar2 = collectionModId;
  }
  while( true ) {
    if (entries == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (entries == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)entries + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    iVar3 = ArchetypeDB_getArchetype(*puVar4,iVar2);
    if (iVar3 != 0) {
      collectionModId = iVar3 + 4;
      PointerVector_pushBack(outVector,&collectionModId,unaff_EDI);
    }
    if (*(undefined4 **)((int)entries + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 2;
  }
  return;
}

