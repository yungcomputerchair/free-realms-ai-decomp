// addr: 0x013804d0
// name: PropertyContainer_setPropertyValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyContainer_setPropertyValue(void * this, int property_id, void *
   value, void * range) */

void __thiscall
PropertyContainer_setPropertyValue(void *this,int property_id,void *value,void *range)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void **ppvVar6;
  
                    /* Sets a property value, delegating to a remapped archetype object's virtual
                       setter when needed, otherwise inserting/updating the local property tree. */
  if (range == (void *)0x0) {
    DisplayActionManager_ensureSingleton();
    range = (void *)FUN_012d0780();
  }
  pvVar1 = range;
  uVar5 = *(undefined4 *)((int)this + 8);
  ArchetypeDB_getInstance();
  cVar2 = FUN_012aeb10(uVar5);
  if (cVar2 == '\x01') {
    uVar5 = *(undefined4 *)((int)this + 0xc);
    iVar3 = *(int *)((int)this + 8) + -300000;
    ArchetypeDB_getInstance();
    piVar4 = (int *)ArchetypeDB_getArchetype(iVar3,uVar5);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xe8))(property_id,value,pvVar1);
      return;
    }
  }
  else {
    ppvVar6 = &value;
    piVar4 = &property_id;
    IntToObjectTree_findOrCreateSlot(&range);
    IntKeyBufferMap_findOrInsert(piVar4);
    FUN_0042c155(ppvVar6);
  }
  return;
}

