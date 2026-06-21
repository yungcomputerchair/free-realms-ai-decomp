// addr: 0x013d80f0
// name: LobbyCommand_ChangeStatus_sub_013d80f0
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall LobbyCommand_ChangeStatus_sub_013d80f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a LobbyCommand_ChangeStatus sub_013d80f0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_0168bce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_ChangeStatus::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

