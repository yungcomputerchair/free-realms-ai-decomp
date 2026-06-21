// addr: 0x0131acb0
// name: CWPlayerController_filterActionType5AndForward
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_filterActionType5AndForward(void * player, int
   playerId_, void * arg, undefined4 forwardArg1_, undefined4 forwardArg2_) */

bool __thiscall
CWPlayerController_filterActionType5AndForward
          (void *this,void *player,int playerId_,void *arg,undefined4 forwardArg1_,
          undefined4 forwardArg2_)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  int iStack_34;
  void *pvStack_30;
  int *piStack_2c;
  uint uStack_28;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = playerId_;
                    /* Returns false for null arg; otherwise, for the controlled player, evaluates
                       CWPlayerController action kind 5 before forwarding to the original handler.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678350;
  local_c = ExceptionList;
  uStack_28 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  if (playerId_ == 0) {
    return false;
  }
  ExceptionList = &local_c;
  if (*(void **)((int)this + 0x40c) != (void *)0x0) {
    piStack_2c = (int *)0x131acf7;
    pvVar4 = (void *)CWPlayerController_getControlledPlayerId(*(void **)((int)this + 0x40c));
    if (player == pvVar4) {
      piStack_2c = (int *)0x131ad06;
      FUN_0131a780();
      local_4 = 0;
      piStack_2c = &playerId_;
      playerId_ = 1;
      pvStack_30 = (void *)0x131ad24;
      iVar5 = FUN_01315ad0();
      piStack_2c = (int *)0x2;
      pvStack_30 = (void *)0x131ad2f;
      FUN_01300680();
      playerId_ = (int)&iStack_34;
      *(int *)(iVar5 + 8) = iVar1;
      FUN_01315e40(local_18);
      local_4 = local_4 & 0xffffff00;
      bVar2 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)this + 0x40c),5);
      if (!bVar2) {
        local_4 = 0xffffffff;
        piStack_2c = (int *)0x131adb9;
        FUN_01315dd0();
        ExceptionList = local_c;
        return false;
      }
      piStack_2c = (int *)0x131ad6b;
      FUN_014032d0();
      local_4 = 0xffffffff;
      piStack_2c = (int *)0x131ad7c;
      FUN_01315dd0();
    }
  }
  piStack_2c = (int *)forwardArg1_;
  pvStack_30 = arg;
  iStack_34 = iVar1;
  uVar3 = DisplayActionBuilder_addCardSelectedAction(player);
  ExceptionList = local_c;
  return (bool)uVar3;
}

