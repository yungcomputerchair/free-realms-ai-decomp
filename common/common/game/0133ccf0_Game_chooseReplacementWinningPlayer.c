// addr: 0x0133ccf0
// name: Game_chooseReplacementWinningPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall Game_chooseReplacementWinningPlayer(int *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Chooses or resolves a player/play-element candidate during win-from-loss
                       handling, using current turn/state, random selection, my-player id, and
                       PlayArea lookup before delegating to another game handler. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167bdc0;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (param_3 == '\0') {
    pvVar8 = Game_getCurrentTurn(param_1);
    iVar4 = PlayerRef_getPlayerIdOrZero(pvVar8);
    if (iVar4 == param_2) {
      pvVar8 = Game_getCurrentTurn(param_1);
      GameTurn_getCurrentStateMachine(pvVar8);
      iVar4 = StateMachine_getCurrentState(uVar3);
      if ((iVar4 != 0) &&
         (pvVar8 = (void *)FUN_00d8d382(iVar4,0,&StateMachineState::RTTI_Type_Descriptor,
                                        &GetTargetState::RTTI_Type_Descriptor,0),
         pvVar8 != (void *)0x0)) {
        compare_field_18(pvVar8,local_1c);
        local_4 = 1;
        if ((local_18 != (void *)0x0) && (uVar3 = local_14 - (int)local_18 >> 2, uVar3 != 0)) {
          iVar4 = *param_1;
          uVar6 = _rand();
          puVar9 = StdVector_atElementPtr4(local_1c,uVar6 % uVar3);
          uVar2 = (**(code **)(iVar4 + 0xd0))(param_2,*puVar9,0,0);
          local_4 = 0xffffffff;
          StdVector_clearStorage(local_1c);
          ExceptionList = local_c;
          return uVar2;
        }
        local_4 = 0xffffffff;
        StdVector_clearStorage(local_1c);
      }
    }
    uVar2 = 0;
  }
  else {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    iVar4 = Game_getMyPlayerID(param_1);
    PlayArea_findPlayerElementById(param_1,iVar4);
    PlayElement_getGame();
    piVar5 = (int *)FUN_0139d7c0();
    (**(code **)(*piVar5 + 0x34))(local_1c);
    do {
      if (local_18 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = local_14 - (int)local_18 >> 2;
      }
      uVar6 = _rand();
      if ((local_18 == (void *)0x0) || ((uint)(local_14 - (int)local_18 >> 2) <= uVar6 % uVar3)) {
        FUN_00d83c2d();
      }
      uVar7 = PlayElement_getId();
      cVar1 = Game_processPlayerActionDisplay(uVar7);
    } while (cVar1 == '\0');
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}

