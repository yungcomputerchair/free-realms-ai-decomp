// addr: 0x012cba90
// name: GameID_lessThan
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameID_lessThan(int * lhs, int * rhs) */

bool GameID_lessThan(int *lhs,int *rhs)

{
                    /* Compares two 8-byte ID pairs lexicographically and returns whether lhs is
                       less than rhs. Evidence: called by RB-tree insertion code using two dwords at
                       node +0xc/+0x10, matching GameID-style pair keys in the match subsystem. */
  if ((*rhs <= *lhs) && ((*rhs < *lhs || (rhs[1] <= lhs[1])))) {
    return false;
  }
  return true;
}

