// addr: 0x00cf3dd0
// name: ClientActionBarDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientActionBarDataSource_ctor(void * this, void * owner) */

void * __thiscall ClientActionBarDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientActionBarDataSource with caller-supplied table name,
                       installs vtables, and stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_00000008);
  *(undefined ***)this = ClientActionBarDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ClientActionBarDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ClientActionBarDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

