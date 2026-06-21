// addr: 0x0131ab90
// name: CWPlayerController_filterActionType4AndForward
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_filterActionType4AndForward(void * player, int
   playerId_, void * arg, undefined4 forwardArg1_, undefined4 forwardArg2_) */

bool __thiscall
CWPlayerController_filterActionType4AndForward
          (void *this,void *player,int playerId_,void *arg,undefined4 forwardArg1_,
          undefined4 forwardArg2_)

{
  bool bVar1;
  undefined1 uVar2;
  void *pvVar3;
  int iVar4;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* For the controlled player, stores arg in the controller map, evaluates action
                       kind 4, and only falls back to the underlying handlers when allowed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678320;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(void **)((int)this + 0x40c) != (void *)0x0) &&
     (pvVar3 = (void *)CWPlayerController_getControlledPlayerId(*(void **)((int)this + 0x40c)),
     player == pvVar3)) {
    FUN_0131a780();
    local_4 = 0;
    iVar4 = FUN_01315ad0();
    FUN_01300680();
    *(int *)(iVar4 + 8) = playerId_;
    FUN_01315e40(local_18);
    local_4 = local_4 & 0xffffff00;
    bVar1 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)this + 0x40c),4);
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
  uVar2 = Game_cardPlayed(this,(int)player,playerId_,SUB41(arg,0),forwardArg1_._0_1_);
  if (!(bool)uVar2) {
    uVar2 = DisplayActionBuilder_addCardSelectedAction(player);
  }
  ExceptionList = local_c;
  return (bool)uVar2;
}

