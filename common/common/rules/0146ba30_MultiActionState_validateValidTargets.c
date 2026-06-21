// addr: 0x0146ba30
// name: MultiActionState_validateValidTargets
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall MultiActionState_validateValidTargets(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void **item;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  char *pcVar12;
  int local_dc;
  undefined1 local_d8 [4];
  int *local_d4;
  int *local_d0;
  int local_cc;
  int *local_c8;
  int *local_c4;
  undefined4 *puStack_c0;
  undefined1 local_bc [4];
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined1 auStack_a8 [8];
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Validates MultiActionState target cards, guarding missing instance data for
                       non-active-player cards. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e821;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff10);
  ExceptionList = &local_c;
  pcVar12 = "MultiActionState::validateValidTargets";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar12,item);
  if (param_1[0x3f] != 4) {
    local_ac = (int *)param_1[0x4e];
    bVar2 = true;
    if (local_ac < (int *)param_1[0x4d]) {
      FUN_00d83c2d();
    }
    local_d4 = (int *)0x0;
    local_d0 = (int *)0x0;
    local_cc = 0;
    local_4 = 0;
    if (param_1[0x47] != 2) {
      piVar8 = (int *)param_1[0x4d];
      local_c8 = param_1 + 0x4c;
      if ((int *)param_1[0x4e] < piVar8) {
        FUN_00d83c2d();
      }
      while( true ) {
        local_c4 = piVar8;
        if ((local_c8 == (int *)0x0) || (local_c8 != param_1 + 0x4c)) {
          FUN_00d83c2d();
        }
        if (piVar8 == local_ac) break;
        EvaluationEnvironment_ctor();
        local_4 = CONCAT31(local_4._1_3_,1);
        EvaluationEnvironment_copyFrom(local_a0,(void *)param_1[0x3a],item);
        FUN_013815b0(param_1[0x3e]);
        uVar11 = StateMachineState_getGame
                           (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                            &Card::RTTI_Type_Descriptor,0);
        pvVar4 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        pvVar4 = (void *)FUN_00d8d382(pvVar4);
        set_play_element_id_field(local_a0,pvVar4);
        piVar10 = local_c8;
        if (local_c8 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if ((int *)piVar10[2] <= piVar8) {
          FUN_00d83c2d();
        }
        EvaluationEnvironment_setCurrentTargetFromElement(local_a0,(void *)*piVar8,item);
        if (param_1[0x3f] == 5) {
          if ((int *)piVar10[2] <= piVar8) {
            FUN_00d83c2d();
          }
          local_dc = *piVar8;
          if ((local_dc == 0) || (*(int *)(local_dc + 100) != 0)) goto LAB_0146bc0c;
          pvVar4 = (void *)StateMachineState_getGame();
          iVar5 = Game_getMyPlayerID(pvVar4);
          iVar6 = GamePlayer_getPlayerId();
          piVar10 = local_c8;
          if (iVar6 == iVar5) goto LAB_0146bc0c;
          uVar7 = PlayElement_getId();
          pcVar12 = 
          "Couldn\'t get instanceData for card %d and I am not the active player. validating card to avoid crash before introduction."
          ;
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar12,uVar7);
          PointerVector_pushBack(local_d8,&local_dc,item);
          local_4 = local_4 & 0xffffff00;
          FUN_01385460();
        }
        else {
LAB_0146bc0c:
          local_b8 = (undefined4 *)0x0;
          local_b4 = (undefined4 *)0x0;
          local_b0 = 0;
          local_4 = CONCAT31(local_4._1_3_,2);
          (**(code **)(*param_1 + 300))(local_bc,0,local_a0);
          if (((local_b8 == (undefined4 *)0x0) || ((int)local_b4 - (int)local_b8 >> 2 == 0)) &&
             (param_1[0x3f] == 3)) {
            bVar2 = false;
          }
          if (((local_b8 == (undefined4 *)0x0) || ((int)local_b4 - (int)local_b8 >> 2 == 0)) &&
             (param_1[0x3f] == 6)) {
            bVar2 = false;
          }
          if ((int *)piVar10[2] <= piVar8) {
            FUN_00d83c2d();
          }
          local_dc = *piVar8;
          bVar1 = true;
          puStack_c0 = local_b4;
          if (local_b4 < local_b8) {
            FUN_00d83c2d();
          }
          puVar9 = local_b8;
          if (local_b4 < local_b8) {
            FUN_00d83c2d();
          }
          while( true ) {
            if (&stack0x00000000 == (undefined1 *)0xbc) {
              FUN_00d83c2d();
            }
            piVar8 = local_d0;
            if (puVar9 == puStack_c0) break;
            if (&stack0x00000000 == (undefined1 *)0xbc) {
              FUN_00d83c2d();
            }
            if (local_b4 <= puVar9) {
              FUN_00d83c2d();
            }
            cVar3 = (**(code **)(*(int *)*puVar9 + 0x68))(local_a0);
            if (cVar3 == '\0') {
              bVar1 = false;
            }
            if (local_b4 <= puVar9) {
              FUN_00d83c2d();
            }
            puVar9 = puVar9 + 1;
          }
          if (bVar1) {
            if ((local_d4 == (int *)0x0) ||
               ((uint)(local_cc - (int)local_d4 >> 2) <= (uint)((int)local_d0 - (int)local_d4 >> 2))
               ) {
              if (local_d0 < local_d4) {
                FUN_00d83c2d();
              }
              FUN_012619f0(auStack_a8,local_d8,piVar8,&local_dc);
            }
            else {
              *local_d0 = local_dc;
              local_d0 = local_d0 + 1;
            }
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          if (local_b8 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_b8);
          }
          local_b8 = (undefined4 *)0x0;
          local_b4 = (undefined4 *)0x0;
          local_b0 = 0;
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01385460();
          piVar8 = local_c4;
        }
        local_c8 = param_1 + 0x4c;
        if ((int *)param_1[0x4e] <= piVar8) {
          FUN_00d83c2d();
        }
        piVar8 = piVar8 + 1;
      }
      if (bVar2) {
        ValueDataList_assign(param_1 + 0x4c,local_d8);
      }
    }
    local_4 = 0xffffffff;
    if (local_d4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_d4);
    }
  }
  ExceptionList = local_c;
  return 1;
}

