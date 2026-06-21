// addr: 0x00ce8b10
// name: ProgressiveQuestSlotsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProgressiveQuestSlotsDataSource_ctor(void * this, void * owner) */

void * __thiscall ProgressiveQuestSlotsDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ProgressiveQuest.Slots data source, installs vtables, and
                       stores owner/context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160f078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_ProgressiveQuest_Slots_01b7c56c);
  *(undefined ***)this = ProgressiveQuestSlotsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ProgressiveQuestSlotsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ProgressiveQuestSlotsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

