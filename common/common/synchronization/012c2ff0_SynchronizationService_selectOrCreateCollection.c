// addr: 0x012c2ff0
// name: SynchronizationService_selectOrCreateCollection
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void SynchronizationService_selectOrCreateCollection(void * this, uint
   accountId_, int collectionType_) */

void __thiscall
SynchronizationService_selectOrCreateCollection(void *this,uint accountId_,int collectionType_)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  char cVar1;
  void *pvVar2;
  void *this_01;
  char *pcVar3;
  void *pvVar4;
  void *map;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  undefined4 ****ppppuVar6;
  undefined4 uVar7;
  int key_;
  undefined **format;
  void *local_450;
  undefined1 local_44c [4];
  void *local_448;
  undefined4 local_438;
  uint local_434;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_430 [4];
  undefined4 ***local_42c [4];
  undefined4 local_41c;
  uint local_418;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Selects the current account collection for the requested type, creating it
                       when absent, setting its names/type/account field, refreshing the DB index,
                       and sending a collection-selected notification. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e5bd;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_450;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffba0);
  ExceptionList = &local_c;
  *(int *)((int)this + 0x28) = collectionType_;
  CollectionDB_initSingleton();
  if (collectionType_ == 3) {
    format = &PTR_LAB_018d4950;
  }
  else {
    format = (undefined **)&DAT_01770978;
  }
  _sprintf(local_3f8,(char *)format,accountId_);
  pcVar3 = local_3f8;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00,local_3f8,(int)pcVar3 - (int)(local_3f8 + 1));
  pvVar4 = CollectionDB_getCollection(this_01,this_00);
  *(void **)((int)this + 8) = pvVar4;
  LobbyAccount_ensureSingleton();
  pvVar4 = LobbyServiceAccountMap_findValue(map,key_);
  local_418 = 0xf;
  local_41c = 0;
  local_42c[0] = (undefined4 ***)((uint)local_42c[0] & 0xffffff00);
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_013a6540(local_44c);
    local_4._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_430,pbVar5,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_434) {
                    /* WARNING: Subroutine does not return */
      _free(local_448);
    }
    local_434 = 0xf;
    local_438 = 0;
    local_448 = (void *)((uint)local_448 & 0xffffff00);
    ppppuVar6 = (undefined4 ****)local_42c[0];
    if (collectionType_ == 3) {
      if (local_418 < 0x10) {
        ppppuVar6 = local_42c;
      }
      pcVar3 = "%s\'s Trade Collection";
    }
    else {
      if (local_418 < 0x10) {
        ppppuVar6 = local_42c;
      }
      pcVar3 = "%s\'s Online Collection";
    }
    _sprintf(local_3f8,pcVar3,ppppuVar6);
  }
  if (*(int *)((int)this + 8) == 0) {
    local_450 = Mem_Alloc(0x90);
    local_4._0_1_ = 2;
    if (local_450 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)CollectionData_ctor();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(void **)((int)this + 8) = pvVar4;
    CollectionData_setName(pvVar4,this_00,pvVar2);
    PropertyContainer_setField64(*(void **)((int)this + 8),accountId_);
    CardCollection_setCollectionType(*(void **)((int)this + 8),collectionType_);
    CollectionDB_setCollection(this_01,*(void **)((int)this + 8));
    CollectionDB_reinsertSynchronizableCollections(this_01);
  }
  pcVar3 = local_3f8;
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_414,local_3f8,(int)pcVar3 - (int)(local_3f8 + 1));
  local_4._0_1_ = 3;
  CollectionData_setDisplayName(*(void **)((int)this + 8),local_414);
  CollectionData_setOwnerName(*(void **)((int)this + 8),local_430);
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
  local_450 = Mem_Alloc(0x14);
  local_4._0_1_ = 4;
  if (local_450 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_012f9eb0();
  }
  local_4._0_1_ = 3;
  FUN_012f8c70(0x1ade9);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar7);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_410);
  }
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_418) {
                    /* WARNING: Subroutine does not return */
    _free(local_42c[0]);
  }
  ExceptionList = local_c;
  return;
}

