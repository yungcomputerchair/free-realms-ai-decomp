// addr: 0x013ea9b0
// name: Engine_TournamentServiceBase_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_TournamentServiceBase_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::TournamentServiceBase and initializes tournament service
                       containers/state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168e7c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01230d10(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = Engine::TournamentServiceBase::vftable;
  FUN_005258fb();
  local_4._0_1_ = 1;
  FUN_013e7cf0();
  local_4._0_1_ = 2;
  FUN_013e7cf0();
  local_4._0_1_ = 3;
  FUN_013e8bf0();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_013ea940();
  param_1[0x15] = 0;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  ExceptionList = local_c;
  return param_1;
}

