// addr: 0x013b0d80
// name: Engine_addCustomSortable
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_addCustomSortable(void * owner, void * sortable_vector) */

void Engine_addCustomSortable(void *owner,void *sortable_vector)

{
  void **position;
  void **value;
  void *this;
  void *pvVar1;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an Engine_CustomSortable, sets its owner to the supplied object,
                       and pushes it into a pointer vector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016873bb;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  local_14[0] = Mem_Alloc(0x18);
  local_4 = 0;
  if (local_14[0] == (void *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)Engine_CustomSortable_ctor();
  }
  local_4 = 0xffffffff;
  if (owner == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)((int)owner + 4);
  }
  PropertyObject_setOwner(this,pvVar1,value);
  pvVar1 = sortable_vector;
  position = *(void ***)((int)sortable_vector + 4);
  owner = this;
  if ((position != (void **)0x0) &&
     ((int)*(void ***)((int)sortable_vector + 8) - (int)position >> 2 != 0)) {
    if (*(void ***)((int)sortable_vector + 8) < position) {
      FUN_00d83c2d();
    }
    PointerVector_insertOne(pvVar1,local_14,pvVar1,position,&owner);
    ExceptionList = local_c;
    return;
  }
  PointerVector_pushBack(sortable_vector,&owner,value);
  ExceptionList = local_c;
  return;
}

