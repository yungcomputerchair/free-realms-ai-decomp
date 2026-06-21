// addr: 0x01515d00
// name: PropertyObjectList_addSelectionSortables
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObjectList_addSelectionSortables(uint archetypeId, void * list)
    */

void PropertyObjectList_addSelectionSortables(uint archetypeId,void *list)

{
  uint uVar1;
  void **value;
  void *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  void *this_00;
  void *in_stack_0000000c;
  uint uVar7;
  void **value_00;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Adds one or two Engine_CustomSortable entries for an archetype depending on a
                       selector mode, setting object id property 0x103a and sometimes property
                       0x47c. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016b7481;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  uVar2 = Archetype_getField3c(this);
  uVar1 = archetypeId;
  uVar7 = archetypeId;
  ArchetypeDB_getInstance();
  iVar3 = ArchetypeDB_getArchetype(uVar7,uVar2);
  pvVar6 = list;
  this_00 = (void *)0x0;
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar4 = (**(code **)(*(int *)list + 0x34))();
  if (iVar4 == 1) {
    archetypeId = (uint)Mem_Alloc(0x18);
    pvStack_4 = (void *)0x0;
    if ((void *)archetypeId != (void *)0x0) {
      this_00 = (void *)Engine_CustomSortable_ctor();
    }
    pvStack_4 = (void *)0xffffffff;
    PropertyObject_setOwner(this_00,(void *)(iVar3 + 4),value);
    pvVar6 = (void *)(**(code **)(*(int *)pvVar6 + 0x30))(uVar1);
    FUN_0143ba80((void *)0x103a,pvVar6);
  }
  else {
    if (iVar4 != 2) {
      ExceptionList = local_c;
      return;
    }
    value_00 = (void **)uVar1;
    pvStack_4 = (void *)(**(code **)(*(int *)pvVar6 + 0x2c))(uVar1,0);
    pvVar5 = Mem_Alloc(0x18);
    local_c = (void *)0x1;
    if (pvVar5 != (void *)0x0) {
      this_00 = (void *)Engine_CustomSortable_ctor();
    }
    local_c = (void *)0xffffffff;
    PropertyObject_setOwner(this_00,(void *)(iVar3 + 4),value_00);
    FUN_0143ba80((void *)0x103a,pvStack_4);
    FUN_0143bb00(0x47c,1);
    pvStack_4 = this_00;
    PointerVector_pushBack((void *)archetypeId,&pvStack_4,value_00);
    pvVar6 = (void *)(**(code **)(*(int *)pvVar6 + 0x2c))(uVar1,1);
    if (pvVar6 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    archetypeId = (uint)Mem_Alloc(0x18);
    pvStack_4 = (void *)0x2;
    if ((void *)archetypeId == (void *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)Engine_CustomSortable_ctor();
    }
    pvStack_4 = (void *)0xffffffff;
    PropertyObject_setOwner(this_00,(void *)(iVar3 + 4),value);
    FUN_0143ba80((void *)0x103a,pvVar6);
    FUN_0143bb00(0x47c,0);
  }
  archetypeId = (uint)this_00;
  PointerVector_pushBack(in_stack_0000000c,&archetypeId,value);
  ExceptionList = local_c;
  return;
}

