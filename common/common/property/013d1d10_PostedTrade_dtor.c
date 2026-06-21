// addr: 0x013d1d10
// name: PostedTrade_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PostedTrade_dtor(void * this) */

void __fastcall PostedTrade_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys a PostedTrade by freeing its owned vectors/strings and then
                       restoring base PersistentComponent/PersistentBase vftables. It begins with
                       PostedTrade::vftable assignments and releases many string/vector members. */
  puStack_8 = &LAB_0168b1c4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined ***)this = PostedTrade::vftable;
  *(undefined ***)((int)this + 4) = PostedTrade::vftable;
  local_4 = 10;
  if (*(void **)((int)this + 0xfc) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0xfc),*(void **)((int)this + 0x100));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xfc));
  }
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  local_4 = 9;
  if (0xf < *(uint *)((int)this + 0xf4)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xe0));
  }
  *(undefined4 *)((int)this + 0xf4) = 0xf;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0xe0) = 0;
  local_4 = 8;
  if (0xf < *(uint *)((int)this + 0xd8)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc4));
  }
  *(undefined4 *)((int)this + 0xd8) = 0xf;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  local_4 = 7;
  if (0xf < *(uint *)((int)this + 0xbc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa8));
  }
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  local_4 = 6;
  if (0xf < *(uint *)((int)this + 0x9c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x88));
  }
  *(undefined4 *)((int)this + 0x9c) = 0xf;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  local_4 = 5;
  if (0xf < *(uint *)((int)this + 0x80)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x6c));
  }
  *(undefined4 *)((int)this + 0x80) = 0xf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_00521a9c(uVar1);
  local_4._0_1_ = 3;
  FUN_00521a9c();
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < *(uint *)((int)this + 0x44)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x30));
  }
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  Sortable_dtor((void *)((int)this + 4));
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

