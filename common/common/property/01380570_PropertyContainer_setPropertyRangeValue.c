// addr: 0x01380570
// name: PropertyContainer_setPropertyRangeValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyContainer_setPropertyRangeValue(void * this, int property_id,
   void * value, void * owned_buffer, int a5, int a6, void * range) */

void __thiscall
PropertyContainer_setPropertyRangeValue
          (void *this,int property_id,void *value,void *owned_buffer,int a5,int a6,void *range)

{
  char cVar1;
  int *piVar2;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  void **ppvStack_28;
  int *piStack_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Sets a range/nested property value, delegating to remapped archetype objects
                       when appropriate or updating local property trees, then frees an owned
                       temporary buffer. */
  puStack_8 = &LAB_016825d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (range == (void *)0x0) {
    DisplayActionManager_ensureSingleton();
    range = (void *)FUN_012d0780();
  }
  piStack_24 = (int *)0x13805be;
  ArchetypeDB_getInstance();
  piStack_24 = (int *)0x13805c5;
  cVar1 = FUN_012aeb10();
  if (cVar1 == '\x01') {
    piStack_24 = (int *)(*(int *)((int)this + 8) + -300000);
    ppvStack_28 = (void **)0x13805db;
    ArchetypeDB_getInstance();
    ppvStack_28 = (void **)0x13805e2;
    piVar2 = (int *)ArchetypeDB_getArchetype();
    if (piVar2 != (int *)0x0) {
      range = auStack_30;
      FUN_005f15f0(&value);
      local_4 = local_4 & 0xffffff00;
      (**(code **)(*piVar2 + 0xe0))(property_id);
    }
  }
  else {
    piStack_24 = &property_id;
    ppvStack_28 = &range;
    uStack_2c = 0x138062f;
    IntToObjectTree_findOrCreateSlot();
    ppvStack_28 = (void **)0x1380636;
    IntKeyBufferMap_findOrInsert();
    piStack_24 = (int *)0x138063d;
    FUN_005f1e5c();
  }
  local_4 = 0xffffffff;
  if (owned_buffer != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    piStack_24 = (int *)&UNK_01380653;
    _free(owned_buffer);
  }
  ExceptionList = local_c;
  return;
}

