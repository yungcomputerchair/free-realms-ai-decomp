// addr: 0x0130be50
// name: TradingCardLobby_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TradingCardLobby_scalarDeletingDtor(undefined4 *param_1,byte param_2)

{
                    /* Runs the TradingCard::Lobby destructor and frees this when the
                       deleting-destructor flag is set. This is the compiler scalar deleting
                       destructor wrapper. */
  PersistentBase_ctor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

