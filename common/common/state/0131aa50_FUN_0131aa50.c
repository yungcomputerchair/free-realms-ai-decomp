// addr: 0x0131aa50
// name: FUN_0131aa50
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_0131aa50(void *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  bool fromReplay_;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016782f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)param_1 + 0x40c) != 0) {
    FUN_0131a780();
    local_4 = 0;
    iVar3 = FUN_01315ad0();
    FUN_01300680();
    *(int *)(iVar3 + 8) = param_2;
    iVar3 = FUN_01315ad0();
    FUN_01300680();
    *(int *)(iVar3 + 8) = param_3;
    FUN_01315e40(local_18);
    local_4 = local_4 & 0xffffff00;
    bVar1 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)param_1 + 0x40c),7);
    if (!bVar1) {
      local_4 = 0xffffffff;
      FUN_01315dd0();
      ExceptionList = local_c;
      return 0;
    }
    FUN_014032d0();
    local_4 = 0xffffffff;
    FUN_01315dd0();
  }
  fromReplay_ = false;
  bVar1 = false;
  iVar3 = Game_getMyPlayerID(param_1);
  uVar2 = Game_cardPlayed(param_1,iVar3,param_2,bVar1,fromReplay_);
  if (param_3 != 0) {
    iVar3 = Game_getMyPlayerID(param_1);
    uVar2 = DisplayActionBuilder_addCardSelectedAction(iVar3);
  }
  ExceptionList = local_c;
  return uVar2;
}

