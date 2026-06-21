// addr: 0x013b4800
// name: LobbyCommand_SendUChatText_sub_013b4800
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall LobbyCommand_SendUChatText_sub_013b4800(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a LobbyCommand_SendUChatText sub_013b4800 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_01687ecf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_SendUChatText::vftable;
  local_4 = 4;
  if (0xf < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1f]);
  }
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  local_4 = 3;
  if (0xf < (uint)param_1[0x1d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_4 = 2;
  if (0xf < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  param_1[0x16] = 0xf;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_4 = 1;
  if (0xf < (uint)param_1[0xf]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[10]);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_4 = 0;
  if (0xf < (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

