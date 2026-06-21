// addr: 0x0143b260
// name: PropertyContainer_forEachChildWithPersistentId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyContainer_forEachChildWithPersistentId(void * container, int
   unused, void * visitor, uint persistentId) */

void __cdecl
PropertyContainer_forEachChildWithPersistentId
          (void *container,int unused,void *visitor,uint persistentId)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char extraout_AL;
  void *pvVar4;
  void *local_8;
  int local_4;
  
                    /* Iterates a PropertyContainer child list, gets each child's
                       PersistentComponent id, tests it with a helper, and calls the visitor for
                       matching children. Evidence is PropertyContainer_getChildList and
                       PersistentComponent_getPersistentId callees. */
  if (container != (void *)0x0) {
    local_8 = PropertyContainer_getChildList(container);
    local_4 = **(int **)((int)local_8 + 4);
    while( true ) {
      iVar3 = local_4;
      pvVar2 = local_8;
      pvVar4 = PropertyContainer_getChildList(container);
      iVar1 = *(int *)((int)pvVar4 + 4);
      if ((pvVar2 == (void *)0x0) || (pvVar2 != pvVar4)) {
        FUN_00d83c2d();
      }
      if (iVar3 == iVar1) break;
      if (pvVar2 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)((int)pvVar2 + 4)) {
        FUN_00d83c2d();
      }
      pvVar4 = (void *)PersistentComponent_getPersistentId(*(void **)(iVar3 + 0x10));
      ArchetypeVisitor_visitArchetypeByField3c((void *)unused,pvVar4);
      if (extraout_AL != '\0') {
        if (iVar3 == *(int *)((int)pvVar2 + 4)) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)visitor + 4))(*(undefined4 *)(iVar3 + 0x10),persistentId);
      }
      CollectionDataChildIterator_increment((int *)&local_8);
    }
  }
  return;
}

