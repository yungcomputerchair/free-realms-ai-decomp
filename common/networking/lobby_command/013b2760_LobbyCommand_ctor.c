// addr: 0x013b2760
// name: LobbyCommand_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LobbyCommand_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LobbyCommand by invoking the NetworkCommand/base constructor,
                       installing LobbyCommand::vftable, and zeroing its command field. Evidence is
                       the LobbyCommand::vftable assignment and broad use by derived lobby commands.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(param_1);
  *param_1 = LobbyCommand::vftable;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}

