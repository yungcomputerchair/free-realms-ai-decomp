// addr: 0x013d1360
// name: CollectionRequirement_hasRequiredItems
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionRequirement_hasRequiredItems(void * req) */

bool __fastcall CollectionRequirement_hasRequiredItems(void *req)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  void *this;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  
                    /* Checks whether a collection has at least the required count for each child
                       requirement entry. */
  ArchetypeDB_getInstance();
  CollectionDB_initSingleton();
  DisplayActionManager_ensureSingleton();
  iVar4 = FUN_012d08f0();
  if (*(int *)((int)req + 0xc) == iVar4) {
    return false;
  }
  pvVar5 = (void *)CollectionDB_getCollectionById(iVar4);
  piVar1 = *(int **)((int)req + 0x5c);
  piVar2 = (int *)*piVar1;
  do {
    if (req == (void *)0xffffffa8) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      return true;
    }
    if (req == (void *)0xffffffa8) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)req + 0x5c)) {
      FUN_00d83c2d();
    }
    uVar3 = piVar2[3];
    if (piVar2 == (int *)*(int *)((int)req + 0x5c)) {
      FUN_00d83c2d();
    }
    iVar4 = piVar2[4];
    ArchetypeDB_getInstance();
    uVar6 = Archetype_getField3c(this);
    iVar7 = ArchetypeDB_getArchetype(uVar3,uVar6);
    if (iVar7 != 0) {
      iVar7 = 0;
      if ((pvVar5 != (void *)0x0) &&
         (pvVar8 = PropertyContainer_findChild(pvVar5), pvVar8 != (void *)0x0)) {
        iVar7 = FUN_013d3b30();
      }
      if (iVar7 < iVar4) {
        return false;
      }
    }
    FUN_004d21f9();
  } while( true );
}

