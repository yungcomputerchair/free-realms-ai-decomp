// addr: 0x014ca570
// name: LobbyCommand_BuyLeagueActions_vectorReserveCopyConstruct
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_BuyLeagueActions_vectorReserveCopyConstruct(int first, int
   last, int dest) */

int LobbyCommand_BuyLeagueActions_vectorReserveCopyConstruct(int first,int last,int dest)

{
  int iVar1;
  int in_stack_00000010;
  int in_stack_00000014;
  
                    /* Thin wrapper around the BuyLeagueActions vector range copy-construction
                       helper, used when reserving/reallocating vector storage. Evidence is the call
                       to 014c9b50 and caller 014ca9a0's reserve-capacity logic. */
  iVar1 = LobbyCommand_BuyLeagueActions_vectorCopyConstructRange
                    (last,in_stack_00000010,in_stack_00000014);
  return iVar1;
}

