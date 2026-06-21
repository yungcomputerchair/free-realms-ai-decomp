// addr: 0x013abcf0
// name: PropertyObjectList_initializeDefaultCollectionFilter
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObjectList_initializeDefaultCollectionFilter(void * this) */

void __fastcall PropertyObjectList_initializeDefaultCollectionFilter(void *this)

{
  void *pvVar1;
  undefined4 extraout_EAX;
  undefined4 uVar2;
  undefined4 uVar3;
  bool keepPrimaryList;
  void *context;
  undefined4 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes default filter/list state, registers several field constraints
                       for class id 0x31d, and stores the default collection pointer. Evidence is
                       PropertyObjectList_clearVectors, filter setup callees, and
                       CollectionDB_resolveDefaultCollection. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016867b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  context = (void *)0x0;
  pvVar1 = (void *)FUN_014357a0(0,DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  PropertyObjectList_DefaultCollectionFilter_setContext(pvVar1,context);
  uVar4 = 0xffff;
  FUN_014357a0(0xffff);
  FUN_013c1a80(uVar4);
  keepPrimaryList = true;
  pvVar1 = (void *)FUN_01435790();
  PropertyObjectList_clearVectors(pvVar1,keepPrimaryList);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"",0);
  local_4 = 0;
  pbVar5 = local_28;
  FUN_01435790(pbVar5);
  FUN_01437cd0(pbVar5);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  uVar6 = 0;
  uVar4 = 0x31d;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  FUN_01435790(0x31d,0);
  FUN_01436f20(uVar4,uVar6);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 2;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,2,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 3;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,3,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 4;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,4,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 7;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,7,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 8;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,8,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 9;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,9,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = 1;
  uVar2 = 10;
  uVar6 = 4;
  uVar4 = 0x31d;
  FUN_01435790(0x31d,4,10,1,0);
  FUN_01438e70(uVar4,uVar6,uVar2,uVar3,uVar7);
  CollectionDB_initSingleton();
  CollectionDB_resolveDefaultCollection();
  *(undefined4 *)((int)this + 0xa0) = extraout_EAX;
  *(undefined1 *)((int)this + 0xa5) = 1;
  ExceptionList = local_c;
  return;
}

