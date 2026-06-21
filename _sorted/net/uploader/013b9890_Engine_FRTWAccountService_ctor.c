// addr: 0x013b9890
// name: Engine_FRTWAccountService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_FRTWAccountService_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::FRTWAccountService and initializes its service members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016886f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013c04b0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = Engine::FRTWAccountService::vftable;
  FUN_013b96d0();
  local_4._0_1_ = 1;
  FUN_013b9740();
  local_4._0_1_ = 2;
  FUN_013b97b0();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_013b9820();
  ExceptionList = local_c;
  return param_1;
}

