// addr: 0x01473c00
// name: DoublePassState_beginCardPlayed
// subsystem: common/common/rules
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall
DoublePassState_beginCardPlayed(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int *this;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  int playerId_;
  char *pcVar10;
  undefined1 local_c8 [4];
  int *local_c4;
  int *local_c0;
  undefined4 local_bc;
  int iStack_b8;
  int local_b4;
  undefined1 *puStack_b0;
  int *piStack_ac;
  void *local_a8;
  int *piStack_a4;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Handles the begin-card-play path for DoublePassState, validating
                       player/default action and selected target before continuing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f4d6;
  local_c = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff28);
  ExceptionList = &local_c;
  uVar8 = StateMachineState_getGame(param_3);
  pvVar5 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  if ((pvVar5 != (void *)0x0) &&
     (this = (int *)FUN_00d8d382(pvVar5,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0), this != (int *)0x0)) {
    iVar9 = param_2;
    pvVar5 = (void *)StateMachineState_getGame();
    local_a8 = PlayArea_findPlayerElementById(pvVar5,iVar9);
    if (local_a8 != (void *)0x0) {
      local_b4 = 0;
      local_c4 = (int *)0x0;
      local_c0 = (int *)0x0;
      local_bc = 0;
      local_4 = 0;
      (**(code **)(*this + 0x114))(local_c8,1);
      Card_checkModifierPredicate68(this,local_c8,3);
      piStack_a4 = local_c0;
      if (local_c0 < local_c4) {
        FUN_00d83c2d();
      }
      piVar7 = local_c4;
      iStack_b8 = 0;
      if (local_c0 < local_c4) {
        FUN_00d83c2d();
      }
      puStack_b0 = local_c8;
      while( true ) {
        puVar1 = puStack_b0;
        piStack_ac = piVar7;
        if ((puStack_b0 == (undefined1 *)0x0) || (puStack_b0 != local_c8)) {
          FUN_00d83c2d();
        }
        if (piVar7 == piStack_a4) break;
        if (puVar1 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)(puVar1 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        iVar9 = *piVar7;
        if ((iVar9 != 0) && (cVar2 = CommandObject_setActionReturnKey24(), cVar2 != '\0')) {
          EvaluationEnvironment_ctor();
          local_4 = CONCAT31(local_4._1_3_,1);
          EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],pvVar4);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setBooleanKey4(0);
          EvaluationEnvironment_setActionReturn(iVar9);
          set_play_element_id_field(auStack_a0,this);
          playerId_ = param_2;
          pvVar5 = (void *)StateMachineState_getGame();
          pvVar5 = PlayArea_findPlayerElementById(pvVar5,playerId_);
          if (pvVar5 == (void *)0x0) {
            FUN_012f5a60("player","..\\common\\common\\state\\DoublePassState.cpp",0x14c);
          }
          FUN_013815b0(pvVar5);
          cVar2 = (**(code **)(*this + 0xdc))(iVar9,auStack_a0,1);
          if (cVar2 != '\0') {
            iStack_b8 = iStack_b8 + 1;
            local_b4 = iVar9;
          }
          local_4 = local_4 & 0xffffff00;
          FUN_01385460();
          piVar7 = piStack_ac;
        }
        if (*(int **)(puStack_b0 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        piVar7 = piVar7 + 1;
      }
      if (local_b4 == 0) {
        pcVar10 = "defaultActon is NULL!";
        pvVar5 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar5,pcVar10,pvVar4);
        (**(code **)(*param_1 + 0x88))();
        local_4 = 0xffffffff;
        if (local_c4 == (int *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      if (iStack_b8 < 2) {
        bVar3 = (**(code **)(*this + 0xe4))(param_4,local_a8);
        local_4 = 0xffffffff;
        if (local_c4 == (int *)0x0) {
          ExceptionList = local_c;
          return (uint)bVar3;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      pvVar4 = (void *)StateMachineState_getGame();
      pvVar4 = PlayArea_findPlayerElementById(pvVar4,param_2);
      if (pvVar4 != (void *)0x0) {
        pcVar10 = 
        "This card has more than 1 valid action, right-click to select which action to take.";
        pvVar5 = (void *)StateMachineState_getGame();
        GamePlayer_logFormattedMessage(pvVar5,(int)pvVar4,pcVar10);
      }
      local_4 = 0xffffffff;
      if (local_c4 == (int *)0x0) {
        ExceptionList = local_c;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x88))();
  ExceptionList = local_c;
  return uVar6 & 0xffffff00;
}

