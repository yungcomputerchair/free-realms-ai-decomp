// addr: 0x013b40a0
// name: LobbyCommand_SendText_sub_013b40a0
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall LobbyCommand_SendText_sub_013b40a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a LobbyCommand_SendText sub_013b40a0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_01687d83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_SendText::vftable;
  local_4 = 0;
  if (0xf < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

