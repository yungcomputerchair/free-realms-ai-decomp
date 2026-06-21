// addr: 0x01321680
// name: Engine_FRTWGameService_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Engine_FRTWGameService_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor/cleanup for Engine::FRTWGameService: installs vtable, destroys
                       several owned red-black tree/vector members, frees owned arrays, and runs
                       base cleanup. */
  puStack_8 = &LAB_01678dae;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = Engine::FRTWGameService::vftable;
  local_4 = 6;
  FUN_01321610(uVar1);
  local_4._0_1_ = 5;
  FUN_01321610();
  local_4._0_1_ = 4;
  FUN_01321610();
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((void *)param_1[0x1e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((void *)param_1[0x1a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((void *)param_1[0x16] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16]);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4 = 0xffffffff;
  FUN_0131c7a0();
  ExceptionList = local_c;
  return;
}

