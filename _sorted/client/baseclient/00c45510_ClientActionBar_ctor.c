// addr: 0x00c45510
// name: ClientActionBar_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientActionBar_ctor(void * this, void * owner) */

void * __thiscall ClientActionBar_ctor(void *this,void *owner)

{
  void *pvVar1;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a client action bar by chaining BaseActionBar_ctor, allocating
                       ClientActionBarDataSource, and storing it through action-bar helper state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fbb31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseActionBar_ctor(this,in_stack_0000000c);
  *(undefined ***)this = ClientActionBar::vftable;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(void **)((int)this + 0x3a8) = owner;
  *(undefined4 *)((int)this + 0x3ac) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pvVar1 = Mem_Alloc(600);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientActionBarDataSource_ctor(pvVar1,this);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00c43af0(pvVar1);
  ExceptionList = local_c;
  return this;
}

