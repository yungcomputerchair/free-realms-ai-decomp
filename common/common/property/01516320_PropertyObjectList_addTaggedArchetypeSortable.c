// addr: 0x01516320
// name: PropertyObjectList_addTaggedArchetypeSortable
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObjectList_addTaggedArchetypeSortable(void * this, uint
   archetypeId, void * selector) */

void __thiscall
PropertyObjectList_addTaggedArchetypeSortable(void *this,uint archetypeId,void *selector)

{
  void **value;
  void *this_00;
  uint uVar1;
  int iVar2;
  void *src;
  void *pvVar3;
  void *this_01;
  void *in_stack_0000000c;
  uint uVar4;
  void *owner;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Adds a sortable object for an archetype, tags it through this->vtable method
                       with id 0x1075, stores property 0x103a, and appends it to the list. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b75cb;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this_00);
  owner = (void *)archetypeId;
  uVar4 = archetypeId;
  ArchetypeDB_getInstance();
  iVar2 = ArchetypeDB_getArchetype(uVar4,uVar1);
  if (iVar2 != 0) {
    src = (void *)(**(code **)(*(int *)selector + 0x30))();
    pvVar3 = Mem_Alloc(0x18);
    this_01 = (void *)0x0;
    puStack_8 = (undefined1 *)0x0;
    if (pvVar3 != (void *)0x0) {
      this_01 = (void *)Engine_CustomSortable_ctor();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    PropertyObject_setOwner(this_01,(void *)(iVar2 + 4),owner);
    (**(code **)(*(int *)this + 0x10))(this_01,0x1075);
    FUN_0143ba80((void *)0x103a,src);
    archetypeId = (uint)this_01;
    PointerVector_pushBack(in_stack_0000000c,&archetypeId,value);
  }
  ExceptionList = local_c;
  return;
}

