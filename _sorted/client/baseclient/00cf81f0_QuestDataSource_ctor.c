// addr: 0x00cf81f0
// name: QuestDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * QuestDataSource_ctor(void * this, void * owner) */

void * __thiscall QuestDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.QuestData data source, installs QuestDataSource
                       vtables, stores owner/context, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_QuestData_01b7ea88);
  *(undefined ***)this = QuestDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = QuestDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = QuestDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

