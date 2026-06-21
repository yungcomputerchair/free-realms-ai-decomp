// addr: 0x013ae680
// name: CollectionView_buildFilteredArchetypeList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * CollectionView_buildFilteredArchetypeList(void * this, void *
   collection, void * idVector) */

void * __thiscall
CollectionView_buildFilteredArchetypeList(void *this,void *collection,void *idVector)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_EAX;
  void *this_00;
  int iVar3;
  void *unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  bool keepPrimaryList;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined **local_2c;
  void *local_28;
  int local_24 [2];
  undefined1 uStack_1a;
  undefined1 uStack_17;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a temporary CollectionImpl/ArchetypeView over a collection, clears
                       object-list vectors, adds filters for supplied ids, and finalizes the
                       resulting list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686be1;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_2c;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_2c = (undefined **)0x0;
  local_28 = collection;
  if (*(int *)((int)this + 0xa0) == 0) {
    CollectionDB_initSingleton();
    CollectionDB_resolveDefaultCollection();
    *(undefined4 *)((int)this + 0xa0) = extraout_EAX;
  }
  CollectionImpl2_DefaultRemove_ctor(local_24);
  local_4 = 1;
  cVar1 = (**(code **)(local_24[0] + 0x44))(0,uVar2);
  if (cVar1 != '\0') {
    uStack_17 = 1;
  }
  cVar1 = (**(code **)((int)local_28 + 0x44))(1);
  if (cVar1 != '\0') {
    uStack_1a = 1;
  }
  Engine_ArchetypeValidator_visitValidChildren
            (*(void **)((int)this + 0xa0),(void *)((int)this + 0x94),(void *)((int)this + 0x9c),
             &local_2c);
  keepPrimaryList = false;
  this_00 = (void *)FUN_01435790();
  PropertyObjectList_clearVectors(this_00,keepPrimaryList);
  uVar6 = 0xffffffff;
  FUN_014357a0(0xffffffff);
  FUN_013c1a80(uVar6);
  uVar7 = 0;
  uVar5 = 9999;
  uVar4 = 1;
  uVar6 = 0x103a;
  FUN_01435790(0x103a,1,9999,0);
  FUN_01438fb0(uVar6,uVar4,uVar5,uVar7);
  uVar2 = 0;
  iVar3 = StdVector_size(idVector);
  if (0 < iVar3) {
    do {
      if ((*(int *)((int)idVector + 4) == 0) ||
         ((uint)(*(int *)((int)idVector + 8) - *(int *)((int)idVector + 4) >> 2) <= uVar2)) {
        FUN_00d83c2d();
      }
      uVar8 = 0;
      uVar6 = *(undefined4 *)(*(int *)((int)idVector + 4) + uVar2 * 4);
      uVar7 = 1;
      uVar5 = 1;
      uVar4 = 0x31d;
      FUN_01435790(0x31d,1,uVar6,1,0);
      FUN_01438e70(uVar4,uVar5,uVar6,uVar7,uVar8);
      uVar2 = uVar2 + 1;
      iVar3 = StdVector_size(idVector);
    } while ((int)uVar2 < iVar3);
  }
  FUN_01435f00(unaff_EBP,&local_2c);
  local_2c = Engine::CollectionImpl<2,Engine::DefaultRemove<2>_>::vftable;
  local_c = (void *)0x2;
  FUN_013ac020();
  ExceptionList = pvStack_14;
  return unaff_EBP;
}

