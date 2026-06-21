// addr: 0x00c92700
// name: InteractionDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InteractionDataSource_ctor(void * this, void * owner) */

void * __thiscall InteractionDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an InteractionDataSource with a caller-provided name, initializes
                       its entry array, stores context fields, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01606e86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)this = InteractionDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = InteractionDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = InteractionDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = SoeUtil::Array<InteractionDataSourceEntry,0,1>::vftable;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = in_stack_00000008;
  *(undefined4 *)((int)this + 0x268) = in_stack_0000000c;
  *(undefined1 *)((int)this + 0x26c) = 0;
  ExceptionList = local_c;
  return this;
}

