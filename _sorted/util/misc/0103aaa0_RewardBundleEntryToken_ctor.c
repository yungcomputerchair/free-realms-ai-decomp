// addr: 0x0103aaa0
// name: RewardBundleEntryToken_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryToken_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase and installs RewardBundleEntryToken vtable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryToken::vftable;
  ExceptionList = local_c;
  return param_1;
}

