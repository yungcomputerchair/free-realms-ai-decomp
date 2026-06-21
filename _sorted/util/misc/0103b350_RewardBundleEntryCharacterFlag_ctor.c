// addr: 0x0103b350
// name: RewardBundleEntryCharacterFlag_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RewardBundleEntryCharacterFlag_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs RewardBundleEntryBase, installs RewardBundleEntryCharacterFlag
                       vtable, initializes character flag fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01638a73;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  RewardBundleEntryBase_ctor(param_1);
  local_4 = 0;
  *param_1 = RewardBundleEntryCharacterFlag::vftable;
  FUN_00703540(uVar1);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  ExceptionList = local_c;
  return param_1;
}

