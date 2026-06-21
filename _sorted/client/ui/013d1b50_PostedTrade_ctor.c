// addr: 0x013d1b50
// name: PostedTrade_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PostedTrade_ctor(void * this) */

void * __fastcall PostedTrade_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PostedTrade, including PersistentBase/PersistentComponent and
                       Sortable bases, installs PostedTrade vtables, and initializes many
                       string/buffer fields and numeric members. Class name is explicit in vtable
                       symbols. */
  puStack_8 = &LAB_0168b0e8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  local_4 = 1;
  Sortable_ctor((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = PostedTrade::vftable;
  *(undefined ***)this = PostedTrade::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  local_4._0_1_ = 4;
  *(undefined4 *)((int)this + 0x48) = 0;
  FUN_005258fb(uVar1);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_005258fb();
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x80) = 0xf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0xf;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0xf;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0xf;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  ExceptionList = local_c;
  return this;
}

