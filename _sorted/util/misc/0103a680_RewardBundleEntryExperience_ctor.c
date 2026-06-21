// addr: 0x0103a680
// name: RewardBundleEntryExperience_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryExperience_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase and installs RewardBundleEntryExperience
                       vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryExperience::vftable;
  ExceptionList = local_c;
  return param_1;
}

