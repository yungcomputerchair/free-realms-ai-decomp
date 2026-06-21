// addr: 0x00cfade0
// name: MessageDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDataSource_ctor(void * this, void * owner) */

void * __thiscall MessageDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Message data source, stores owner, clears state,
                       and initializes the MessageData array. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610f06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Message_01b7f008);
  *(undefined ***)this = MessageDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MessageDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MessageDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x260) = SoeUtil::Array<MessageDataSource::MessageData,0,1>::vftable;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  ExceptionList = local_c;
  return this;
}

