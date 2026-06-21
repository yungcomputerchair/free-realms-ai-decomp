// addr: 0x00c6a5e0
// name: PromotionalDataSource_LastPromotionalAward_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PromotionalDataSource_LastPromotionalAward_ctor(void * this, void *
   owner) */

void * __thiscall PromotionalDataSource_LastPromotionalAward_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the PromotionalDataSource LastPromotionalAward table, installs
                       vtables, stores owner, and clears state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01600078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)this = PromotionalDataSource::LastPromotionalAward::vftable;
  *(undefined ***)((int)this + 0x30) = PromotionalDataSource::LastPromotionalAward::vftable;
  *(undefined ***)((int)this + 0x34) = PromotionalDataSource::LastPromotionalAward::vftable;
  *(undefined4 *)((int)this + 0x254) = in_stack_00000008;
  *(undefined4 *)((int)this + 600) = 0;
  ExceptionList = local_c;
  return this;
}

