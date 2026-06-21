// addr: 0x00ceefe0
// name: BrokerItemDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BrokerItemDataSource_ctor(void * this, void * owner) */

void * __thiscall BrokerItemDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BrokerItemDataSource from BaseInventoryDataSource, installs
                       broker item vtables, stores owner, clears broker state, and initializes an
                       int array member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160f916;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseInventoryDataSource_ctor(this,owner,in_stack_00000008,in_stack_0000000c);
  *(undefined ***)this = BrokerItemDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BrokerItemDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BrokerItemDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = BrokerItemDataSource::vftable;
  *(void **)((int)this + 0x2e8) = owner;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined ***)((int)this + 0x2f8) = SoeUtil::Array<int,0,1>::vftable;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  ExceptionList = local_c;
  return this;
}

