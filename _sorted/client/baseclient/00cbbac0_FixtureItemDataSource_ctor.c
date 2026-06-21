// addr: 0x00cbbac0
// name: FixtureItemDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FixtureItemDataSource_ctor(void * this, void * owner) */

void * __thiscall FixtureItemDataSource_ctor(void *this,void *owner)

{
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a FixtureItemDataSource through the item-definition base
                       initializer, installs vtables, stores the owning fixture context, and clears
                       three state fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160ae08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseItemDefinitionDataSource_ctor(this,in_stack_0000000c,owner);
  *(undefined ***)this = FixtureItemDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = FixtureItemDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = FixtureItemDataSource::vftable;
  *(void **)((int)this + 0x52f4) = owner;
  *(undefined4 *)((int)this + 0x52f8) = 0;
  *(undefined4 *)((int)this + 0x52fc) = 0;
  *(undefined4 *)((int)this + 0x5300) = 0;
  ExceptionList = local_c;
  return this;
}

