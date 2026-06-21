// addr: 0x00c472d0
// name: MiniGameGoalDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MiniGameGoalDataSource_ctor(void * this, void * owner) */

void * __thiscall MiniGameGoalDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.MiniGameGoals data source, stores owner/context,
                       initializes an int list member, and sets its enabled flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fbd56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_MiniGameGoals_01b6fcb8);
  *(undefined ***)this = MiniGameGoalDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MiniGameGoalDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MiniGameGoalDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined ***)((int)this + 0x25c) = SoeUtil::List<int,-1>::vftable;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined1 *)((int)this + 0x26c) = 1;
  ExceptionList = local_c;
  return this;
}

