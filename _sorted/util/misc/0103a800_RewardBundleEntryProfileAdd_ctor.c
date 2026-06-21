// addr: 0x0103a800
// name: RewardBundleEntryProfileAdd_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryProfileAdd_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryProfileAdd
                       vtable, and clears its profile id field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016387b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryProfileAdd::vftable;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return param_1;
}

