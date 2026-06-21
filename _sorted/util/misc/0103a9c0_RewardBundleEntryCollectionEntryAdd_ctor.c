// addr: 0x0103a9c0
// name: RewardBundleEntryCollectionEntryAdd_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryCollectionEntryAdd_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs
                       RewardBundleEntryCollectionEntryAdd vtable, and clears collection entry
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryCollectionEntryAdd::vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  ExceptionList = local_c;
  return param_1;
}

