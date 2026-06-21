// addr: 0x013dc9d0
// name: PropertyContainer_countRemappedRangeChildValues
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int PropertyContainer_countRemappedRangeChildValues(void) */

int PropertyContainer_countRemappedRangeChildValues(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  int local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Iterates child property containers, tests each child's persistent id for a
                       remapped range, and totals the property vector counts for those children. */
  local_c = 0;
  pvVar5 = PropertyContainer_getChildList(*(void **)(in_ECX + 0xa0));
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  local_4 = (undefined4 *)*puVar1;
  local_8 = pvVar5;
  while( true ) {
    puVar3 = local_4;
    pvVar2 = local_8;
    if ((local_8 == (void *)0x0) || (local_8 != pvVar5)) {
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
      iVar6 = PersistentComponent_getPersistentId(pvVar2);
      ArchetypeDB_getInstance();
      bVar4 = PropertyId_isRemappedRange(iVar6);
      if (bVar4) {
        iVar6 = PropertyVector16_getCount((int)pvVar2);
        local_c = local_c + iVar6;
      }
    }
    CollectionDataChildIterator_increment((int *)&local_8);
  }
  return local_c;
}

