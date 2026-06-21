// addr: 0x014ca270
// name: LobbyCommand_BuyLeagueActions_vectorAssignCopyConstruct
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_BuyLeagueActions_vectorAssignCopyConstruct(int first, int
   last, int dest) */

int LobbyCommand_BuyLeagueActions_vectorAssignCopyConstruct(int first,int last,int dest)

{
  int iVar1;
  
                    /* Thin wrapper around the BuyLeagueActions vector range copy-construction
                       helper, used by vector assignment after allocating storage. Evidence is the
                       call to 014c9b50 and caller 014cb0f0's vector assignment logic. */
  iVar1 = LobbyCommand_BuyLeagueActions_vectorCopyConstructRange(first,last,dest);
  return iVar1;
}

