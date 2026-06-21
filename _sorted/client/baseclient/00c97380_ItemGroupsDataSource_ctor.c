// addr: 0x00c97380
// name: ItemGroupsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ItemGroupsDataSource_ctor(void * this, void * owner) */

void * __thiscall ItemGroupsDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ItemGroupsDataSource with caller-provided name, owner, and
                       group context fields, then clears state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016076a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_0000000c);
  *(undefined ***)this = ItemGroupsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ItemGroupsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ItemGroupsDataSource::vftable;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = in_stack_00000008;
  *(void **)((int)this + 0x260) = owner;
  ExceptionList = local_c;
  return this;
}

