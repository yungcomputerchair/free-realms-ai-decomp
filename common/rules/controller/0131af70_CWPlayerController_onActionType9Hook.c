// addr: 0x0131af70
// name: CWPlayerController_onActionType9Hook
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_onActionType9Hook(void * player) */

bool __fastcall CWPlayerController_onActionType9Hook(void *player)

{
  bool bVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Runs CWPlayerController action kind 9 for a player that has an attached
                       controller and returns false if the controller check fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016783e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)player + 0x40c) != 0) {
    FUN_0131a780();
    local_4 = 0;
    FUN_01315e40(local_18);
    local_4 = local_4 & 0xffffff00;
    bVar1 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)player + 0x40c),9);
    if (!bVar1) {
      local_4 = 0xffffffff;
      FUN_01315dd0();
      ExceptionList = local_c;
      return false;
    }
    FUN_014032d0();
    local_4 = 0xffffffff;
    FUN_01315dd0();
  }
  ExceptionList = local_c;
  return true;
}

