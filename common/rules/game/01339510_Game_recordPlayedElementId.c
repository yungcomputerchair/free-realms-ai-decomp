// addr: 0x01339510
// name: Game_recordPlayedElementId
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void Game_recordPlayedElementId(int param_1)

{
                    /* Asserts a non-null input, retrieves a PlayElement id, and appends/records
                       that id. Evidence: cwgame.cpp assert and PlayElement_getId followed by vector
                       insertion helper. */
  if (param_1 == 0) {
    FUN_012f5a60(&DAT_018549f0,"..\\common\\rules\\game\\cwgame.cpp",0x5b7);
  }
  param_1 = PlayElement_getId();
  FUN_0042c155(&param_1);
  return;
}

