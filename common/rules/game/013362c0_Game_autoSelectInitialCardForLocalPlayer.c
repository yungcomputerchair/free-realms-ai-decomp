// addr: 0x013362c0
// name: Game_autoSelectInitialCardForLocalPlayer
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Game_autoSelectInitialCardForLocalPlayer(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *local_4;
  
  local_4 = param_1;
                    /* Calls a setup helper, then for local player 1 dispatches the same selection
                       action as 013361c0, clears a flag, and resets a map. Evidence: cwgame.cpp
                       assert line matches 013361c0 and uses Game_getMyPlayerID. */
  Game_updateNetworkCommands(param_1);
  if (param_1[0xfc] == 2) {
    piVar2 = (int *)Game_getMyPlayerID(param_1);
    if (piVar2 == (int *)0x1) {
      local_4 = piVar2;
      piVar2 = IntDefaultMap_getOrInsert(param_1 + 0xfa,(int *)&local_4);
      cVar1 = (**(code **)(*param_1 + 0xd0))(1,*piVar2,0,0);
      if (cVar1 == '\0') {
        FUN_012f5a60("false","..\\common\\rules\\game\\cwgame.cpp",0xec0);
      }
      else {
        *(undefined1 *)((int)param_1 + 0x3f6) = 0;
        FUN_004fb6c2();
      }
    }
    if (param_1[0xfc] == 2) {
      Game_getMyPlayerID(param_1);
      return;
    }
  }
  return;
}

