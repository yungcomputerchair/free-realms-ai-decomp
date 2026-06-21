// addr: 0x00c7e570
// name: SocialManager_registerFriendsIgnoreDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SocialManager_registerFriendsIgnoreDataSources(void * this) */

void __thiscall SocialManager_registerFriendsIgnoreDataSources(void *this)

{
  void *pvVar1;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates the friends-list and ignore-list datasources and stores them through
                       nearby social manager helpers during ClientPcData deserialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01603afc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  pvVar1 = Mem_Alloc(0x380);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FriendsListDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00c7dba0(pvVar1);
  local_4 = 1;
  pvVar1 = Mem_Alloc(0x608);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = IgnoreListDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00c7dc30(pvVar1);
  ExceptionList = local_c;
  return;
}

