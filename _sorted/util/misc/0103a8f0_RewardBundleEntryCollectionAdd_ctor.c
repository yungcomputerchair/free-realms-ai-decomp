// addr: 0x0103a8f0
// name: RewardBundleEntryCollectionAdd_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryCollectionAdd_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryCollectionAdd
                       vtable, and clears its collection id field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016387e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryCollectionAdd::vftable;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return param_1;
}

