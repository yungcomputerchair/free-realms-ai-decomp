// addr: 0x00cf82a0
// name: QuestObjectiveDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * QuestObjectiveDataSource_ctor(void * this, void * owner) */

void * __thiscall QuestObjectiveDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a QuestObjectiveDataSource with caller-provided name, owner, and
                       quest context; clears the selected objective field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_0000000c);
  *(undefined ***)this = QuestObjectiveDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = QuestObjectiveDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = QuestObjectiveDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined4 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

