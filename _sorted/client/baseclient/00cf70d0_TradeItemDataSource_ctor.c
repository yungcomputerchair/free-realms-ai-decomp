// addr: 0x00cf70d0
// name: TradeItemDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeItemDataSource_ctor(void * this, void * owner) */

void * __thiscall TradeItemDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *in_stack_00000008;
  void *in_stack_0000000c;
  undefined1 in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TradeItemDataSource from BaseInventoryDataSource, installs
                       TradeItemDataSource vtables, stores a mode flag, and initializes trade item
                       state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016106c6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  BaseInventoryDataSource_ctor(this,owner,in_stack_00000008,in_stack_0000000c);
  local_4 = 0;
  *(undefined ***)this = TradeItemDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = TradeItemDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = TradeItemDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = TradeItemDataSource::vftable;
  *(undefined1 *)((int)this + 0x2e8) = in_stack_00000010;
  FUN_00cf6fb0(uVar1);
  ExceptionList = local_c;
  return this;
}

