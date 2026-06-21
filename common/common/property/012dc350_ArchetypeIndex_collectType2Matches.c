// addr: 0x012dc350
// name: ArchetypeIndex_collectType2Matches
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeIndex_collectType2Matches(void * archetypeVector, void * idOut,
   void * ptrOut, void * predicate) */

bool ArchetypeIndex_collectType2Matches
               (void *archetypeVector,void *idOut,void *ptrOut,void *predicate)

{
  undefined4 *puVar1;
  void *this;
  char cVar2;
  void **value;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int local_1c;
  undefined1 local_18 [4];
  int iStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates a vector of Sortable objects, dynamic-casts entries to Archetype,
                       applies a virtual predicate, and either collects matching type-2 ids into a
                       uint vector or stores archetype pointers. Evidence is RTTI for Sortable and
                       Archetype and the branch on predicate result code 2. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671268;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
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
    iVar3 = FUN_00d8d382(*puVar4,0,&Sortable::RTTI_Type_Descriptor,&Archetype::RTTI_Type_Descriptor,
                         0);
    local_1c = iVar3;
    if (iVar3 != 0) {
      FUN_012fa910();
      local_4 = 0;
      cVar2 = (**(code **)(*(int *)(iVar3 + 4) + 4))(predicate,local_18);
      ptrOut = (void *)(iVar3 + 4);
      if (cVar2 == '\0') {
        PointerVector_pushBack(this,&ptrOut,value);
      }
      else if (iStack_14 == 2) {
        ptrOut = pvStack_10;
        this_00 = (void *)PropertyIntVectorMap_findOrCreateSlot(&ptrOut);
        UIntVector_pushBack(this_00,&local_1c,(uint *)value);
      }
      else {
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

