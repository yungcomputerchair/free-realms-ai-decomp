// addr: 0x013b0e60
// name: Engine_CustomSortableList_addSortable
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_CustomSortableList_addSortable(void * this, void * owner) */

void __thiscall Engine_CustomSortableList_addSortable(void *this,void *owner)

{
  void *owner_00;
  void *pvVar1;
  void *unaff_ESI;
  void **this_00;
  void *unaff_retaddr;
  void **value;
  void *local_c;
  undefined1 *puStack_8;
  void **local_4;
  
                    /* Allocates an Engine_CustomSortable, assigns its owner, serializes/configures
                       it with id 0x1075 through a virtual method, and pushes it into a pointer
                       vector. Evidence is Engine_CustomSortable_ctor, PropertyObject_setOwner, and
                       PointerVector_pushBack. */
  local_4 = (void **)0xffffffff;
  puStack_8 = &LAB_016873eb;
  local_c = ExceptionList;
  owner_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x18);
  this_00 = (void **)0x0;
  local_4 = (void **)0x0;
  if (pvVar1 != (void *)0x0) {
    this_00 = (void **)Engine_CustomSortable_ctor();
  }
  local_4 = (void **)0xffffffff;
  PropertyObject_setOwner(this_00,owner,owner_00);
  value = this_00;
  (**(code **)(*(int *)this + 0xc))(this_00,0x1075);
  local_4 = this_00;
  PointerVector_pushBack(unaff_retaddr,&local_4,value);
  ExceptionList = unaff_ESI;
  return;
}

