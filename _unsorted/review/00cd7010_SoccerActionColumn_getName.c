// addr: 0x00cd7010
// name: SoccerActionColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * SoccerActionColumn_getName(undefined4 param_1)

{
                    /* Maps soccer action indexes to strings such as Ball, Dodge, Kick, SuperKick,
                       SlideTackle, Steal, Pass, Call, and Powerup. */
  switch(param_1) {
  case 0:
    return "Ball";
  case 1:
    return "Dodge";
  case 2:
    return "Kick";
  case 3:
    return "SuperKick";
  case 4:
    return "SlideTackle";
  case 5:
    return "Steal";
  case 6:
    return "Pass";
  case 7:
    return "Call";
  case 8:
    return "Powerup";
  default:
    return "<error>";
  }
}

