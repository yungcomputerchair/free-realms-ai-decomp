// addr: 0x0131a900
// name: CWPlayerController_filterActionType6AndForward
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_filterActionType6AndForward(void * player, int
   playerId_, undefined4 actionId_, void * arg, undefined4 forwardArg1_, undefined4 forwardArg2_) */

bool __thiscall
CWPlayerController_filterActionType6AndForward
          (void *this,void *player,int playerId_,int actionId_,void *arg,undefined4 forwardArg1_,
          undefined4 forwardArg2_)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* For the controlled player, inserts the event arg and PackedActionId high bits
                       into the controller map, evaluates action kind 6, then forwards/commits on
                       success. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016782c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(void **)((int)this + 0x40c) != (void *)0x0) &&
     (pvVar2 = (void *)CWPlayerController_getControlledPlayerId(*(void **)((int)this + 0x40c)),
     player == pvVar2)) {
    FUN_0131a780();
    local_4 = 0;
    iVar3 = FUN_01315ad0();
    FUN_01300680();
    *(int *)(iVar3 + 8) = playerId_;
    uVar4 = PackedActionId_getHighBits();
    iVar3 = FUN_01315ad0();
    FUN_01300680();
    *(undefined4 *)(iVar3 + 8) = uVar4;
    FUN_01315e40(local_18);
    local_4 = local_4 & 0xffffff00;
    bVar1 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)this + 0x40c),6);
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
  bVar1 = Game_actionPlayed(this,(int)player,playerId_,actionId_,SUB41(arg,0),forwardArg1_._0_1_);
  ExceptionList = local_c;
  return bVar1;
}

