// addr: 0x00cb52c0
// name: FriendsListDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FriendsListDataSource_ctor(void * this, void * owner) */

void * __thiscall FriendsListDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.FriendsList data source, initializes friend-list
                       internals and the ClientFriendData pointer array, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160a1c4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_FriendsList_01b776d8);
  local_4 = 0;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = FriendsListDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = FriendsListDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = FriendsListDataSource::vftable;
  FUN_00cb5220(uVar1);
  *(undefined ***)((int)this + 0x36c) =
       SoeUtil::Array<FriendsListDataSource::ClientFriendData*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined1 *)((int)this + 0x37c) = 0;
  ExceptionList = local_c;
  return this;
}

