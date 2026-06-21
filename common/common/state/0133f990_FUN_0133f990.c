// addr: 0x0133f990
// name: FUN_0133f990
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall FUN_0133f990(int *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int unaff_EBX;
  undefined4 *puVar11;
  uint unaff_EBP;
  int *piVar12;
  undefined4 *puVar13;
  TypeDescriptor *pTVar14;
  TypeDescriptor *pTVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iStack_58;
  void *pvStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  undefined1 auStack_3c [8];
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c376;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar5 = GamePlayer_getPlayerId(DAT_01b839d8 ^ (uint)&stack0xffffff98);
  Game_logGeneral(param_1,"UPDATEHINTS %d",uVar5);
  local_28 = 0;
  local_24 = 0;
  local_20 = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 1;
  uVar5 = GamePlayer_getPlayerId();
  (**(code **)(*param_1 + 0xf0))(uVar5,&local_1c);
  Game_logGeneral(param_1,"Done with getActiveCards.",uVar5);
  pvVar6 = Game_getCurrentTurn(param_1);
  uVar7 = get_field_8(pvVar6);
  iStack_58 = 0;
  if (uVar7 != 0) {
    iStack_58 = GamePlayer_getPlayerId();
  }
  puVar17 = local_1c;
  if (local_1c < local_20) {
    FUN_00d83c2d();
  }
  puVar11 = local_20;
  if (local_1c < local_20) {
    FUN_00d83c2d();
  }
  puVar13 = &local_24;
  puStack_44 = puVar13;
  while( true ) {
    if ((puVar13 == (undefined4 *)0x0) || (puVar13 != &local_24)) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar17) break;
    if (puVar13 == (undefined4 *)0x0) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)puVar13[2] <= puVar11) {
      FUN_00d83c2d();
    }
    iVar8 = (**(code **)(*(int *)*puVar11 + 0x28))();
    pvVar6 = PlayArea_findPlayerElementById(param_1,iVar8);
    if ((pvVar6 == (void *)0x0) || (iVar8 = GamePlayer_getPlayerId(), iVar8 == iStack_58)) {
      uVar5 = PlayElement_getId();
      Game_logGeneral(param_1,"UPDATEHINTS: hinting card: %d",uVar5);
      pvStack_48 = (void *)PlayElement_getId();
      piVar1 = piStack_2c;
      if ((piStack_30 == (int *)0x0) ||
         ((uint)(local_28 - (int)piStack_30 >> 2) <= (uint)((int)piStack_2c - (int)piStack_30 >> 2))
         ) {
        if (piStack_2c < piStack_30) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(auStack_3c,&uStack_34,piVar1,&pvStack_48);
        puVar13 = puStack_44;
      }
      else {
        *piStack_2c = (int)pvStack_48;
        puVar13 = puStack_44;
        piStack_2c = piStack_2c + 1;
      }
    }
    if ((undefined4 *)puVar13[2] <= puVar11) {
      FUN_00d83c2d();
    }
    puVar11 = puVar11 + 1;
  }
  if ((piStack_30 == (int *)0x0) || ((int)piStack_2c - (int)piStack_30 >> 2 == 0)) {
    unaff_EBP = 0;
  }
  puVar17 = (undefined4 *)param_1[0x2b];
  puVar11 = (undefined4 *)*puVar17;
  while( true ) {
    if (param_1 == (int *)0xffffff58) {
      FUN_00d83c2d();
    }
    if (puVar11 == puVar17) break;
    if (param_1 == (int *)0xffffff58) {
      FUN_00d83c2d();
    }
    if (puVar11 == (undefined4 *)param_1[0x2b]) {
      FUN_00d83c2d();
    }
    pvStack_48 = (void *)PlayElement_getId();
    piVar1 = piStack_2c;
    if (piStack_2c < piStack_30) {
      FUN_00d83c2d();
    }
    piVar12 = piStack_30;
    if (piStack_2c < piStack_30) {
      FUN_00d83c2d();
    }
    piVar2 = piStack_2c;
    puStack_44 = &uStack_34;
    piStack_40 = piVar12;
    for (; (piVar12 != piVar1 && ((void *)*piVar12 != pvStack_48)); piVar12 = piVar12 + 1) {
    }
    if (piStack_2c < piStack_30) {
      FUN_00d83c2d();
    }
    if ((puStack_44 == (undefined4 *)0x0) || (puStack_44 != &uStack_34)) {
      FUN_00d83c2d();
    }
    if (piVar12 != piVar2) {
      if (puVar11 == (undefined4 *)param_1[0x2b]) {
        FUN_00d83c2d();
      }
      Game_logGeneral(param_1,"UPDATEHINTS: hinting card: %d",puVar11[2]);
      if (puVar11 == (undefined4 *)param_1[0x2b]) {
        FUN_00d83c2d();
      }
      piVar1 = piStack_2c;
      if ((piStack_30 == (int *)0x0) ||
         ((uint)(local_28 - (int)piStack_30 >> 2) <= (uint)((int)piStack_2c - (int)piStack_30 >> 2))
         ) {
        if (piStack_2c < piStack_30) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(auStack_3c,&uStack_34,piVar1,puVar11 + 2);
      }
      else {
        *piStack_2c = puVar11[2];
        piStack_2c = piStack_2c + 1;
      }
    }
    if (puVar11 == (undefined4 *)param_1[0x2b]) {
      FUN_00d83c2d();
    }
    puVar11 = (undefined4 *)*puVar11;
  }
  bVar3 = Game_getFlag_14d(param_1);
  if ((!bVar3) || (cVar4 = Game_getFlag_318(), cVar4 == '\x01')) {
    iVar8 = GamePlayer_getPlayerId();
    iVar9 = Game_getMyPlayerID(param_1);
    if (iVar8 == iVar9) {
      pvStack_48 = Mem_Alloc(0x14);
      local_c._0_1_ = 2;
      if (pvStack_48 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)FUN_012f9eb0();
      }
      local_c = (void *)CONCAT31(local_c._1_3_,1);
      FUN_012f8c70(0x71);
      iVar8 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar6,iVar8);
      DisplayActionBuilder_addObjectArg(pvVar6,&uStack_34);
      DisplayActionBuilder_addIntArg(pvVar6,1);
      (**(code **)(*param_1 + 0x150))(unaff_EBX,pvVar6);
    }
  }
  bVar3 = Game_getFlag_14d(param_1);
  if ((((!bVar3) || (cVar4 = Game_getFlag_318(), cVar4 == '\x01')) &&
      (iVar8 = Game_getMyPlayerID(param_1), unaff_EBX != iVar8)) &&
     (bVar3 = Game_getPendingFlag_131(param_1), !bVar3)) {
    pvVar6 = Game_getCurrentTurn(param_1);
    uVar7 = get_field_14(pvVar6);
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    uVar10 = Game_getMyPlayerID(param_1);
    uVar10 = uVar10 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    if (uVar10 == uVar7) {
      uVar16 = 0;
      pTVar15 = &GetTargetState::RTTI_Type_Descriptor;
      pTVar14 = &StateMachineState::RTTI_Type_Descriptor;
      uVar5 = 0;
      pvVar6 = Game_getCurrentTurn(param_1);
      GameTurn_getCurrentStateMachine(pvVar6);
      uVar5 = StateMachine_getCurrentState(uVar5,pTVar14,pTVar15,uVar16);
      iVar8 = FUN_00d8d382(uVar5);
      if (iVar8 == 0) {
        pvStack_48 = Mem_Alloc(0x14);
        local_c._0_1_ = 3;
        if (pvStack_48 == (void *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)FUN_012f9eb0();
        }
        local_c = (void *)CONCAT31(local_c._1_3_,1);
        FUN_012f8c70(0xbe);
        iVar8 = StateMachine_getCurrentState();
        DisplayActionBuilder_addIntArg(pvVar6,iVar8);
        DisplayActionBuilder_addObjectArg(pvVar6,&uStack_34);
        DisplayActionBuilder_addIntArg(pvVar6,5);
        iVar8 = *param_1;
        iVar9 = Game_getMyPlayerID(param_1);
        (**(code **)(iVar8 + 0x150))(iVar9,pvVar6);
      }
    }
  }
  bVar3 = Game_getFlag_14d(param_1);
  if (!bVar3) {
    iVar8 = GamePlayer_getPlayerId();
    iVar9 = Game_getMyPlayerID(param_1);
    if (iVar8 != iVar9) {
      local_c = (void *)((uint)local_c & 0xffffff00);
      if (local_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      local_20 = (undefined4 *)0x0;
      local_1c = (undefined4 *)0x0;
      local_18 = 0;
      local_c = (void *)0xffffffff;
      if (piStack_30 == (int *)0x0) {
        ExceptionList = local_14;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(piStack_30);
    }
  }
  puVar17 = &uStack_34;
  IntKeyBufferMap_findOrInsert(&stack0xffffffa4);
  FUN_005f1e5c(puVar17);
  Game_logGeneral(param_1,"DONE UPDATEHINTS %d (%d)",unaff_EBX);
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (local_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_c = (void *)0xffffffff;
  if (piStack_30 == (int *)0x0) {
    ExceptionList = local_14;
    return unaff_EBP >> 0x18;
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_30);
}

