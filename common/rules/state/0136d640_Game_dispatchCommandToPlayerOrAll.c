// addr: 0x0136d640
// name: Game_dispatchCommandToPlayerOrAll
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_dispatchCommandToPlayerOrAll(void *param_1,int param_2,undefined4 *param_3)

{
  undefined4 unaff_retaddr;
  
                    /* Dispatches a game command to a specific player when a player id is supplied,
                       otherwise to all players; logs and destroys the command if the server is
                       ignoring commands. Evidence is the CW_ERROR string and callees
                       dispatchCommandToPlayer/dispatchCommandToPlayers/broadcast except player. */
  if (*(char *)((int)param_1 + 0x362) != '\0') {
    Game_logGeneral(param_1,"CW_ERROR: Server ignoring game commands!",unaff_retaddr);
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)*param_3)(1);
    }
    return;
  }
  if (param_2 == 0) {
    Game_dispatchCommandToPlayers(param_1,param_3);
    return;
  }
  if (*(char *)((int)param_1 + 0x14d) != '\0') {
    Game_broadcastCallbackResultExceptPlayer(param_1,param_2,param_3);
    return;
  }
  Game_dispatchCommandToPlayer(param_1,param_2,param_3);
  return;
}

