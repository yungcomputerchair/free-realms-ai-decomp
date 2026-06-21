// addr: 0x00c99920
// name: OptionsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OptionsDataSource_ctor(void * this, void * owner) */

void * __thiscall OptionsDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an OptionsDataSource with a caller-provided table name and two
                       context fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01607b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_0000000c);
  *(undefined ***)this = OptionsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = OptionsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = OptionsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

