// addr: 0x0103a3e0
// name: RewardBundleEntryBase_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * RewardBundleEntryBase_ctor(undefined4 * this) */

undefined4 * __fastcall RewardBundleEntryBase_ctor(undefined4 *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RewardBundleEntryBase, sets its vtable, clears scalar fields, and
                       initializes embedded string/container members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638696;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *this = RewardBundleEntryBase::vftable;
  this[1] = 0;
  this[2] = 0;
  *(undefined1 *)(this + 3) = 0;
  this[4] = 0;
  FUN_00720bf0(0,0);
  local_4 = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  FUN_00722da0(uVar1);
  this[0xf] = 0;
  *(undefined1 *)(this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x41) = 0;
  ExceptionList = local_c;
  return this;
}

