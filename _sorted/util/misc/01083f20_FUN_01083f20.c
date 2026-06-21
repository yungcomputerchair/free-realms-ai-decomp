// addr: 0x01083f20
// name: FUN_01083f20
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * init_reward_or_item_record(undefined4 * this, undefined4 idA_,
   undefined4 idB_, int source_) */

undefined4 * __thiscall
init_reward_or_item_record(void *this,undefined4 idA_,undefined4 idB_,int source_)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a reward/item-like record from two ids and an optional source,
                       copying several fields and initializing embedded containers. Exact class
                       identity is not evident. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016411a6;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = idA_;
  *(undefined4 *)((int)this + 0x14) = idB_;
  if (source_ == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(source_ + 4);
  }
  *(undefined4 *)((int)this + 0x18) = uVar3;
  if (source_ == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(source_ + 8);
  }
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  if (source_ == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(source_ + 0xc);
  }
  *(undefined4 *)((int)this + 0x20) = uVar3;
  if (source_ == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(source_ + 0x74);
  }
  *(undefined1 *)((int)this + 0x24) = uVar1;
  FUN_00720bf0(0,0);
  local_4 = 0;
  if (source_ == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(source_ + 0x88);
  }
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  FUN_0070bac0(uVar2);
  *(undefined4 *)((int)this + 0xd8) = 0;
  if (source_ != 0) {
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(source_ + 0x14);
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(source_ + 0x18);
  }
  ExceptionList = local_c;
  return this;
}

