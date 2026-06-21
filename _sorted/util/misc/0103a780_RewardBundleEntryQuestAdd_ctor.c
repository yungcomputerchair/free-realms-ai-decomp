// addr: 0x0103a780
// name: RewardBundleEntryQuestAdd_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryQuestAdd_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryQuestAdd vtable,
                       and clears its quest id field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  *param_1 = RewardBundleEntryQuestAdd::vftable;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return param_1;
}

