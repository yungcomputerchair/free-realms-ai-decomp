// addr: 0x01435fd0
// name: PropertyObjectList_addArchetypeSortable
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObjectList_addArchetypeSortable(uint archetypeId, void * list) */

void PropertyObjectList_addArchetypeSortable(uint archetypeId,void *list)

{
  uint uVar1;
  void **value;
  void *this;
  uint uVar2;
  int iVar3;
  void *src;
  void *this_00;
  void *in_stack_0000000c;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If an archetype exists for the given id, creates an Engine_CustomSortable
                       owned by that archetype object, sets property 0x103a, and appends it to a
                       pointer vector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169713b;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  uVar2 = Archetype_getField3c(this);
  uVar1 = archetypeId;
  uVar4 = archetypeId;
  ArchetypeDB_getInstance();
  iVar3 = ArchetypeDB_getArchetype(uVar4,uVar2);
  this_00 = (void *)0x0;
  if (iVar3 != 0) {
    archetypeId = (uint)Mem_Alloc(0x18);
    local_4 = 0;
    if ((void *)archetypeId != (void *)0x0) {
      this_00 = (void *)Engine_CustomSortable_ctor();
    }
    local_4 = 0xffffffff;
    PropertyObject_setOwner(this_00,(void *)(iVar3 + 4),value);
    src = (void *)(**(code **)(*(int *)list + 0x30))(uVar1);
    FUN_0143ba80((void *)0x103a,src);
    archetypeId = (uint)this_00;
    PointerVector_pushBack(in_stack_0000000c,&archetypeId,value);
  }
  ExceptionList = local_c;
  return;
}

