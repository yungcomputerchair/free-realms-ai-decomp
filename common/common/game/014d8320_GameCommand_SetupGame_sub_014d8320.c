// addr: 0x014d8320
// name: GameCommand_SetupGame_sub_014d8320
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameCommand_SetupGame_sub_014d8320(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a GameCommand_SetupGame sub_014d8320 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_016ad759;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = GameCommand_SetupGame::vftable;
  local_4 = 2;
  StdRbTree_destroyAndFree(param_1 + 0x1b);
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((void *)param_1[0xd] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_0141b310();
  ExceptionList = puStack_8;
  return;
}

