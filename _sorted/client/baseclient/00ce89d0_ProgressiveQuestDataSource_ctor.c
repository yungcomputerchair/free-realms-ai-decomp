// addr: 0x00ce89d0
// name: ProgressiveQuestDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProgressiveQuestDataSource_ctor(void * this, void * owner) */

void * __thiscall ProgressiveQuestDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ProgressiveQuest.Definition data source, installs vtables, and
                       stores owner/context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160efe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_ProgressiveQuest_Definition_01b7c568);
  *(undefined ***)this = ProgressiveQuestDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ProgressiveQuestDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ProgressiveQuestDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

