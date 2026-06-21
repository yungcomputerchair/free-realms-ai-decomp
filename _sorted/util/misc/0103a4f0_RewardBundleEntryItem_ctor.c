// addr: 0x0103a4f0
// name: RewardBundleEntryItem_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryItem_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryItem vtable, and
                       initializes item-specific TargetCharacter data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016386c8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  local_4 = 0;
  *param_1 = RewardBundleEntryItem::vftable;
  FUN_0101cd40(uVar1);
  ExceptionList = local_c;
  return param_1;
}

