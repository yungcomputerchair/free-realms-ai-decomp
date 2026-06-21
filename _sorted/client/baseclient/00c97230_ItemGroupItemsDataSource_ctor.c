// addr: 0x00c97230
// name: ItemGroupItemsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ItemGroupItemsDataSource_ctor(void * this, void * owner) */

void * __thiscall ItemGroupItemsDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ItemGroupItemsDataSource, installs vtables, initializes state,
                       stores owner/context, and copies an item definition manager pointer from the
                       owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01607618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_00000008);
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)this = ItemGroupItemsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ItemGroupItemsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ItemGroupItemsDataSource::vftable;
  *(void **)((int)this + 0x260) = owner;
  *(undefined4 *)((int)this + 0x25c) = *(undefined4 *)((int)owner + 0x20c);
  ExceptionList = local_c;
  return this;
}

