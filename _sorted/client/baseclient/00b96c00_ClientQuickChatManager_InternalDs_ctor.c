// addr: 0x00b96c00
// name: ClientQuickChatManager_InternalDs_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientQuickChatManager_InternalDs_ctor(void * this, void * owner) */

void * __thiscall ClientQuickChatManager_InternalDs_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientQuickChatManager internal GUI data source with a
                       caller-supplied name and owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e3658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)this = ClientQuickChatManager::InternalDs::vftable;
  *(undefined ***)((int)this + 0x30) = ClientQuickChatManager::InternalDs::vftable;
  *(undefined ***)((int)this + 0x34) = ClientQuickChatManager::InternalDs::vftable;
  *(undefined4 *)((int)this + 0x254) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

