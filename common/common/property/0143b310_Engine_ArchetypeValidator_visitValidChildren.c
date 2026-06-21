// addr: 0x0143b310
// name: Engine_ArchetypeValidator_visitValidChildren
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_ArchetypeValidator_visitValidChildren(void * container, void *
   arg, void * visitor, void * validator) */

void __cdecl
Engine_ArchetypeValidator_visitValidChildren
          (void *container,void *arg,void *visitor,void *validator)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char extraout_AL;
  void *pvVar4;
  void *pvStack_8;
  int iStack_4;
  
                    /* Runs a validator hook, then iterates a PropertyContainer child list and
                       invokes a visitor callback for children whose archetype/key passes
                       FUN_0143a650. Evidence is PropertyContainer_getChildList,
                       CollectionDataChildIterator_increment, and caller set around
                       Engine_ArchetypeValidator. */
  (**(code **)(*(int *)validator + 0x24))();
  if (container != (void *)0x0) {
    pvStack_8 = PropertyContainer_getChildList(container);
    iStack_4 = **(int **)((int)pvStack_8 + 4);
    while( true ) {
      iVar3 = iStack_4;
      pvVar2 = pvStack_8;
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
      ArchetypeVisitor_visitArchetypeByField3c(arg,*(void **)(iVar3 + 0xc));
      if (extraout_AL != '\0') {
        if (iVar3 == *(int *)((int)pvVar2 + 4)) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)visitor + 4))(*(undefined4 *)(iVar3 + 0x10),validator);
      }
      CollectionDataChildIterator_increment((int *)&pvStack_8);
    }
  }
  return;
}

