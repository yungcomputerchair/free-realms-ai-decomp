// addr: 0x00b96ca0
// name: ClientQuickChatManager_InternalEmoteItemCategoriesDs_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientQuickChatManager_InternalEmoteItemCategoriesDs_ctor(void * this,
   void * owner) */

void * __thiscall ClientQuickChatManager_InternalEmoteItemCategoriesDs_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ClientQuickChatManager emote item categories internal data
                       source with caller-supplied name and owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e3688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)this = ClientQuickChatManager::InternalEmoteItemCategoriesDs::vftable;
  *(undefined ***)((int)this + 0x30) =
       ClientQuickChatManager::InternalEmoteItemCategoriesDs::vftable;
  *(undefined ***)((int)this + 0x34) =
       ClientQuickChatManager::InternalEmoteItemCategoriesDs::vftable;
  *(undefined4 *)((int)this + 0x254) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

