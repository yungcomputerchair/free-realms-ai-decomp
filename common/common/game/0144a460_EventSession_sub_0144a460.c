// addr: 0x0144a460
// name: EventSession_sub_0144a460
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall EventSession_sub_0144a460(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Identifies a EventSession sub_0144a460 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  puStack_8 = &LAB_0169a66a;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = Engine::EventSession::vftable;
  local_4 = (void *)0x3;
  FUN_013e9bd0(uVar1);
  local_4 = (void *)CONCAT31(local_4._1_3_,2);
  StdRbTree_destroyAndFree(param_1 + 0x1f);
  StdRbTree_destroyAndFree(param_1 + 0x1c);
  if (0xf < (uint)param_1[0x1b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16]);
  }
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (0xf < (uint)param_1[0x14]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  ExceptionList = local_4;
  return;
}

