// addr: 0x014ca000
// name: LobbyCommand_BuyLeagueActions_vectorMoveBackward
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * LobbyCommand_BuyLeagueActions_vectorMoveBackward(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
                    /* Moves a block of 4-byte vector elements backward with memmove_s and returns
                       the new destination start. Evidence is the element count computed from
                       last-first, destination adjusted by count*4, and caller 014cae90's vector
                       insertion logic. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

