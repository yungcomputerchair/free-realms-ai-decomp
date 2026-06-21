// addr: 0x0103a5d0
// name: RewardBundleEntryChest_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryChest_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryChest vtable, and
                       initializes chest-specific TargetCharacter data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016386f8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  local_4 = 0;
  *param_1 = RewardBundleEntryChest::vftable;
  FUN_0101cd40(uVar1);
  ExceptionList = local_c;
  return param_1;
}

