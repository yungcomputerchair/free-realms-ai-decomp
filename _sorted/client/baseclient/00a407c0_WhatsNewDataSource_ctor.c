// addr: 0x00a407c0
// name: WhatsNewDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WhatsNewDataSource_ctor(void * this, void * owner) */

void * __thiscall WhatsNewDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a WhatsNewDataSource, installing vtables, storing owner/context
                       fields, and clearing an update flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b3d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_0000000c);
  *(undefined ***)this = WhatsNewDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = WhatsNewDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = WhatsNewDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

