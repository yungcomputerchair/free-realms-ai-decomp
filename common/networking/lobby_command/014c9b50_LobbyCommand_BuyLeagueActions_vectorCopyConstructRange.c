// addr: 0x014c9b50
// name: LobbyCommand_BuyLeagueActions_vectorCopyConstructRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_BuyLeagueActions_vectorCopyConstructRange(int first, int
   last, int dest) */

int __cdecl LobbyCommand_BuyLeagueActions_vectorCopyConstructRange(int first,int last,int dest)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Helper that copy-constructs a range of 4-byte vector elements into
                       uninitialized destination storage and returns the end pointer. Evidence is
                       the loop over [first,last) calling 014c9b20 and callers in
                       BuyLeagueActions-style vector copy/reserve helpers. */
  puStack_c = &LAB_016ab370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; first != last; first = first + 4) {
    FUN_014c9b20(dest,first);
    dest = dest + 4;
  }
  ExceptionList = local_10;
  return dest;
}

