// addr: 0x014025b0
// name: Match_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Match_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Match by constructing its TradingCard::Lobby base, setting Match
                       vtables, and initializing match-specific fields such as state and flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Lobby_ctor(param_1);
  *param_1 = Match::vftable;
  param_1[1] = Match::vftable;
  param_1[0x1c] = 0;
  param_1[7] = 2;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  ExceptionList = local_c;
  return param_1;
}

