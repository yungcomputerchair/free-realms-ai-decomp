// addr: 0x00a43c90
// name: AdventurersJournalManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AdventurersJournalManager_ctor(void * this, void * client) */

void * __thiscall AdventurersJournalManager_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs the adventurer's journal datasource manager and creates region,
                       hub, sticker, and misc quest datasources. */
  puStack_8 = &LAB_015b44e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = client;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  uStack_3 = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = 3;
  pvVar1 = Mem_Alloc(0x260);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AdventurersJournalRegionDataSource_ctor(pvVar1,client);
  }
  local_4 = 3;
  FUN_00a42a70(pvVar1);
  pvVar1 = Mem_Alloc(0x260);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AdventurersJournalHubDataSource_ctor(pvVar1,client);
  }
  local_4 = 3;
  FUN_00a42ae0(pvVar1);
  pvVar1 = Mem_Alloc(0x260);
  local_4 = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AdventurersJournalStickerDataSource_ctor(pvVar1,client);
  }
  local_4 = 3;
  FUN_00a42b50(pvVar1);
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 7;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AdventurersJournalMiscQuestDataSource_ctor(pvVar1,client);
  }
  _local_4 = CONCAT31(uStack_3,3);
  FUN_00a42bc0(pvVar1);
  ExceptionList = local_c;
  return this;
}

