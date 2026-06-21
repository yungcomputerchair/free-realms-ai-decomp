// addr: 0x00cdf760
// name: QuickChatAutoCompleteDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * QuickChatAutoCompleteDataSource_ctor(void * this, void * owner) */

void * __thiscall QuickChatAutoCompleteDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.QuickChat.AutoComplete data source, initializes
                       auto-complete internals, and sets an empty query string member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160de74;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_QuickChat_AutoComplet_01b7aeec);
  local_4 = 0;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = QuickChatAutoCompleteDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = QuickChatAutoCompleteDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = QuickChatAutoCompleteDataSource::vftable;
  FUN_00cdf420(uVar1);
  *(undefined ***)((int)this + 0xe80) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0xe84) = &DAT_01bf0dac;
  *(undefined4 *)((int)this + 0xe8c) = 0;
  *(undefined4 *)((int)this + 0xe88) = 0;
  ExceptionList = local_c;
  return this;
}

