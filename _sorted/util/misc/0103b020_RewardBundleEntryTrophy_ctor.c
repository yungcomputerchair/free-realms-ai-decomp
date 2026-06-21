// addr: 0x0103b020
// name: RewardBundleEntryTrophy_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryTrophy_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase and installs RewardBundleEntryTrophy vtable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryTrophy::vftable;
  ExceptionList = local_c;
  return param_1;
}

