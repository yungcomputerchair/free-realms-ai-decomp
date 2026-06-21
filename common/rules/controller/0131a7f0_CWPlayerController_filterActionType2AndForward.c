// addr: 0x0131a7f0
// name: CWPlayerController_filterActionType2AndForward
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_filterActionType2AndForward(void * player, int
   playerId_, void * arg, undefined4 forwardArg_) */

bool __thiscall
CWPlayerController_filterActionType2AndForward
          (void *this,void *player,int playerId_,void *arg,undefined4 forwardArg_)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  int iVar6;
  void *pvStack_38;
  int iStack_34;
  int *piStack_30;
  uint uStack_2c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar2 = playerId_;
                    /* When the event playerId matches the attached CWPlayerController's controlled
                       player id, stores arg in the temporary map and blocks forwarding if action
                       kind 2 evaluation fails; otherwise forwards to the original handler. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678290;
  local_c = ExceptionList;
  uStack_2c = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  bVar1 = false;
  if (*(void **)((int)this + 0x40c) != (void *)0x0) {
    piStack_30 = (int *)0x131a82e;
    pvVar5 = (void *)CWPlayerController_getControlledPlayerId(*(void **)((int)this + 0x40c));
    if (player == pvVar5) {
      piStack_30 = (int *)0x131a83d;
      FUN_0131a780();
      local_4 = 0;
      piStack_30 = &playerId_;
      bVar1 = true;
      playerId_ = 1;
      iStack_34 = 0x131a85c;
      iVar6 = FUN_01315ad0();
      piStack_30 = (int *)0x2;
      iStack_34 = 0x131a867;
      FUN_01300680();
      playerId_ = (int)&pvStack_38;
      *(int *)(iVar6 + 8) = iVar2;
      FUN_01315e40(local_18);
      local_4 = local_4 & 0xffffff00;
      bVar3 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)this + 0x40c),2);
      if (!bVar3) {
        local_4 = 0xffffffff;
        piStack_30 = (int *)0x131a8f8;
        FUN_01315dd0();
        ExceptionList = local_c;
        return false;
      }
      local_4 = 0xffffffff;
      piStack_30 = (int *)0x131a8a8;
      FUN_01315dd0();
    }
  }
  piStack_30 = arg;
  iStack_34 = iVar2;
  pvStack_38 = player;
  uVar4 = DisplayActionBuilder_addButtonPressedAction();
  if (bVar1) {
    piStack_30 = (int *)0x131a8cd;
    FUN_014032d0();
  }
  ExceptionList = local_c;
  return (bool)uVar4;
}

