// addr: 0x013cecf0
// name: Deck_collectArchetypesFromEntries
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deck_collectArchetypesFromEntries(void * entries, void * outVector, int
   collectionModId) */

void Deck_collectArchetypesFromEntries(void *entries,void *outVector,int collectionModId)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *unaff_EDI;
  
                    /* Iterates deck entry pairs, resolves each archetype through ArchetypeDB, and
                       appends found archetype pointers/ids to a UIntVector. Evidence is caller
                       Deck_collectArchetypes and ArchetypeDB_getArchetype plus UIntVector_pushBack.
                        */
  ArchetypeDB_getInstance();
  puVar1 = *(undefined4 **)((int)entries + 8);
  if (puVar1 < *(undefined4 **)((int)entries + 4)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)((int)entries + 4);
  iVar2 = collectionModId;
  if (*(undefined4 **)((int)entries + 8) < puVar3) {
    FUN_00d83c2d();
    iVar2 = collectionModId;
  }
  while( true ) {
    if (entries == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (entries == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)entries + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    collectionModId = ArchetypeDB_getArchetype(*puVar3,iVar2);
    if (collectionModId != 0) {
      UIntVector_pushBack(outVector,&collectionModId,unaff_EDI);
    }
    if (*(undefined4 **)((int)entries + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 2;
  }
  return;
}

