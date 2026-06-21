// addr: 0x012dc4b0
// name: ArchetypeIndex_collectType3Matches
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeIndex_collectType3Matches(void * archetypeVector, void * idOut,
   void * ptrOut, void * predicate) */

bool ArchetypeIndex_collectType3Matches
               (void *archetypeVector,void *idOut,void *ptrOut,void *predicate)

{
  undefined4 *puVar1;
  void *this;
  char cVar2;
  void **value;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 local_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates Sortable entries, dynamic-casts to Archetype, applies a virtual
                       predicate, and for result code 3 resolves/inserts a string-keyed vector
                       before collecting ids; otherwise it collects pointers. Evidence is
                       Sortable/Archetype RTTI and use of PropertyNameVectorTree_findOrInsert. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671298;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  puVar1 = *(undefined4 **)((int)archetypeVector + 8);
  if (puVar1 < *(undefined4 **)((int)archetypeVector + 4)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)archetypeVector + 4);
  this = ptrOut;
  if (*(undefined4 **)((int)archetypeVector + 8) < puVar4) {
    FUN_00d83c2d();
    this = ptrOut;
  }
  while( true ) {
    if (archetypeVector == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (archetypeVector == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)archetypeVector + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)FUN_00d8d382(*puVar4,0,&Sortable::RTTI_Type_Descriptor,
                                  &Archetype::RTTI_Type_Descriptor,0);
    ptrOut = pvVar3;
    if (pvVar3 != (void *)0x0) {
      FUN_012fa910();
      local_4 = 0;
      cVar2 = (**(code **)(*(int *)((int)pvVar3 + 4) + 4))(predicate,local_18);
      if (cVar2 == '\0') {
        ptrOut = (void *)((int)pvVar3 + 4);
        PointerVector_pushBack(this,&ptrOut,value);
      }
      else if (iStack_14 == 3) {
        pvVar3 = (void *)PropertyNameVectorTree_findOrInsert(uStack_10);
        UIntVector_pushBack(pvVar3,&ptrOut,(uint *)value);
      }
      else {
        ptrOut = (void *)((int)pvVar3 + 4);
        PointerVector_pushBack(this,&ptrOut,value);
      }
      local_4 = 0xffffffff;
      FUN_01300cd0();
    }
    if (*(undefined4 **)((int)archetypeVector + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  ExceptionList = local_c;
  return true;
}

