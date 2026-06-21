// addr: 0x013dca70
// name: PropertyContainer_countChildrenByRemappedType
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyContainer_countChildrenByRemappedType(int typeValue) */

int __thiscall PropertyContainer_countChildrenByRemappedType(void *this,int typeValue)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *this_00;
  uint uVar7;
  int *piVar8;
  int local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Counts child property quantities whose persistent ids remap to an archetype
                       carrying property 0x229ea equal to the requested value. */
  local_c = 0;
  pvVar4 = PropertyContainer_getChildList(*(void **)((int)this + 0xa0));
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  local_4 = (undefined4 *)*puVar1;
  local_8 = pvVar4;
  while( true ) {
    puVar3 = local_4;
    pvVar2 = local_8;
    if ((local_8 == (void *)0x0) || (local_8 != pvVar4)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    pvVar2 = (void *)puVar3[4];
    if (pvVar2 != (void *)0x0) {
      iVar5 = PersistentComponent_getPersistentId(pvVar2);
      ArchetypeDB_getInstance();
      uVar6 = PropertyId_getRemappedRangeTypeId(iVar5);
      if (uVar6 != 0xffffffff) {
        ArchetypeDB_getInstance();
        uVar7 = Archetype_getField3c(this_00);
        ArchetypeDB_getInstance();
        piVar8 = (int *)ArchetypeDB_getArchetype(uVar6,uVar7);
        if (piVar8 != (int *)0x0) {
          iVar5 = (**(code **)(*piVar8 + 0x80))(0x229ea);
          if (iVar5 == typeValue) {
            iVar5 = PropertyVector16_getCount((int)pvVar2);
            local_c = local_c + iVar5;
          }
        }
      }
    }
    CollectionDataChildIterator_increment((int *)&local_8);
  }
  return local_c;
}

