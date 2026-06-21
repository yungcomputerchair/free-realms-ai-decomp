// addr: 0x014734e0
// name: DoublePass_passPushed
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DoublePass_passPushed(void * state, int playerId_) */

void __thiscall DoublePass_passPushed(void *this,void *state,int playerId_)

{
  undefined1 uVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  bool *pbVar6;
  void *pvVar7;
  int iVar8;
  int unused_;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 local_38 [4];
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar7 = state;
                    /* Handles a player pressing pass in DoublePass, validates state/player, logs,
                       records the pass, and emits pass display messages. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f44b;
  local_c = ExceptionList;
  piVar2 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  ExceptionList = &local_c;
  pcVar9 = "DOUBLEPASS::PASSPUSHED playerid: %d";
  pvVar4 = state;
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,pcVar9,pvVar4);
  pvVar4 = (void *)StateMachineState_getGame();
  pvVar4 = Game_getCurrentTurn(pvVar4);
  get_field_8(pvVar4);
  pvVar4 = (void *)GamePlayer_getPlayerId();
  if (pvVar7 == pvVar4) {
    if (*(int *)((int)this + 0x128) == 3) {
      *(undefined4 *)((int)this + 0x128) = 1;
      pvVar4 = Mem_Alloc(0x30);
      local_4 = 0;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)StateMachineState_getGame();
        pvVar4 = GameCommand_ButtonPressed_ctor(pvVar4,pvVar3);
      }
      local_4 = 0xffffffff;
      set_field_4(pvVar4,(uint)pvVar7);
      StateCommand_setField24(pvVar4,1);
      pvVar3 = pvVar7;
      StateMachineState_getGame(pvVar7,pvVar4);
      Game_dispatchCommandToPlayerOrAll(pvVar3,pvVar4);
      pbVar6 = IntToBoolMap_getOrInsert((void *)((int)this + 0xf8),&state,piVar2);
      *pbVar6 = true;
      pvVar4 = (void *)StateMachineState_getGame();
      pvVar7 = PlayArea_findPlayerElementById(pvVar4,(int)pvVar7);
      local_34 = (int *)0x0;
      local_30 = (int *)0x0;
      local_2c = 0;
      local_4 = 1;
      puVar10 = local_38;
      StateMachineState_getGame(puVar10);
      FUN_013630f0(puVar10);
      state = local_30;
      if (local_30 < local_34) {
        FUN_00d83c2d();
      }
      pcVar9 = "You pass.";
      pvVar4 = pvVar7;
      pvVar3 = (void *)StateMachineState_getGame();
      GamePlayer_logFormattedMessage(pvVar3,(int)pvVar4,pcVar9);
      piVar2 = local_34;
      if (local_30 < local_34) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x38) {
          FUN_00d83c2d();
        }
        if (piVar2 == state) break;
        if (&stack0x00000000 == (undefined1 *)0x38) {
          FUN_00d83c2d();
        }
        if (local_30 <= piVar2) {
          FUN_00d83c2d();
        }
        if ((void *)*piVar2 != pvVar7) {
          pvVar4 = Game_copyCommandObjectList(pvVar7,local_28);
          local_4._0_1_ = 2;
          if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
            iVar8 = (int)pvVar4 + 4;
          }
          else {
            iVar8 = *(int *)((int)pvVar4 + 4);
          }
          if (local_30 <= piVar2) {
            FUN_00d83c2d();
          }
          unused_ = *piVar2;
          pcVar9 = "%s passes.";
          pvVar4 = (void *)StateMachineState_getGame(unused_,"%s passes.",iVar8);
          GamePlayer_logFormattedMessage(pvVar4,unused_,pcVar9);
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
            _free(local_24);
          }
          local_10 = 0xf;
          local_14 = 0;
          local_24 = (void *)((uint)local_24 & 0xffffff00);
        }
        if (local_30 <= piVar2) {
          FUN_00d83c2d();
        }
        piVar2 = piVar2 + 1;
      }
      uVar1 = (**(code **)(*(int *)this + 0x128))();
      state = (void *)CONCAT31(state._1_3_,uVar1);
      (**(code **)(*(int *)this + 300))();
      (**(code **)(*(int *)this + 0x130))(state,2);
      local_4 = 0xffffffff;
      if (local_34 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_34);
      }
    }
    else {
      pcVar9 = "Player pushed button in wrong state! playerid: %d";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar9,pvVar7);
    }
  }
  else {
    pvVar4 = (void *)StateMachineState_getCurrentTurn();
    get_field_8(pvVar4);
    uVar5 = GamePlayer_getPlayerId();
    pcVar9 = "Wrong player pushed pass! got player: %d, wanted player: %d";
    pvVar4 = (void *)StateMachineState_getGame
                               ("Wrong player pushed pass! got player: %d, wanted player: %d",pvVar7
                                ,uVar5);
    Game_logGeneral(pvVar4,pcVar9,pvVar7);
    (**(code **)(*(int *)this + 0x88))();
  }
  ExceptionList = local_c;
  return;
}

