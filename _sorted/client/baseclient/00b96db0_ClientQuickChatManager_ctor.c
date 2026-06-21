// addr: 0x00b96db0
// name: ClientQuickChatManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientQuickChatManager_ctor(void * this, void * client) */

void * __thiscall ClientQuickChatManager_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ClientQuickChatManager, initializes quick-chat/emote datasource
                       members, builds QuickChatAutoCompleteDataSource, and loads
                       Resources\EmoteItemCategories.txt. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e371f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0107c580(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  *(undefined ***)this = ClientQuickChatManager::vftable;
  *(undefined4 *)((int)this + 0xfb8) = 0;
  *(undefined4 *)((int)this + 0xfbc) = 0;
  *(undefined4 *)((int)this + 0xfc0) = 0;
  *(undefined4 *)((int)this + 0xfc4) = 0;
  *(undefined4 *)((int)this + 0xfc8) = 0;
  *(undefined4 *)((int)this + 0xfcc) = 0;
  *(undefined4 *)((int)this + 0xfd0) = 0;
  *(undefined4 *)((int)this + 0xfd4) = 0;
  *(undefined4 *)((int)this + 0xfd8) = 0;
  *(undefined4 *)((int)this + 0xfdc) = 0;
  *(undefined4 *)((int)this + 0xfe0) = 0;
  *(undefined4 *)((int)this + 0xfe4) = 0;
  *(undefined4 *)((int)this + 0xfe8) = 0;
  *(undefined4 *)((int)this + 0xfb4) = 0;
  *(void **)((int)this + 0xfec) = client;
  *(undefined4 *)((int)this + 0xff0) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0xff4) = 0;
  local_4._0_1_ = 3;
  FUN_00b963c0(0);
  *(undefined4 *)((int)this + 0x12988) = 0;
  local_4._0_1_ = 5;
  pvVar1 = Mem_Alloc(600);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientQuickChatManager_InternalDs_ctor(pvVar1,"BaseClient.QuickChatData");
  }
  local_4._0_1_ = 5;
  FUN_00b8b100(pvVar1);
  pvVar1 = Mem_Alloc(600);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientQuickChatManager_InternalEmoteItemCategoriesDs_ctor
                       (pvVar1,"BaseClient.EmoteItemCategories");
  }
  local_4._0_1_ = 5;
  FUN_00b8b170(pvVar1);
  pvVar1 = Mem_Alloc(0xe90);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = QuickChatAutoCompleteDataSource_ctor(pvVar1,this);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00b8b1e0(pvVar1);
  FUN_00b90c70("Resources\\EmoteItemCategories.txt");
  ExceptionList = local_c;
  return this;
}

