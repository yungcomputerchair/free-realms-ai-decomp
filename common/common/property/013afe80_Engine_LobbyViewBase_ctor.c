// addr: 0x013afe80
// name: Engine_LobbyViewBase_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_LobbyViewBase_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::LobbyViewBase and initializes its filter/page-filter
                       members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168706b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::LobbyViewBase::vftable;
  Engine_Filter_ctor(param_1 + 1);
  local_4 = 0;
  Engine_PageFilter_ctor(param_1 + 0x1a);
  local_4._0_1_ = 1;
  Engine_MatchView_ctor(uVar1);
  local_4._0_1_ = 2;
  Engine_Filter_ctor(param_1 + 0x23);
  local_4._0_1_ = 3;
  Engine_PageFilter_ctor(param_1 + 0x3c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0143d050();
  ExceptionList = local_c;
  return param_1;
}

