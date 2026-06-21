// addr: 0x0103ad10
// name: RewardBundleEntryZoneFlag_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryZoneFlag_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryZoneFlag vtable,
                       and initializes string/flag fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016388e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryZoneFlag::vftable;
  param_1[0x11] = SoeUtil::IString<char>::vftable;
  param_1[0x12] = &DAT_01cb65a0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  ExceptionList = local_c;
  return param_1;
}

