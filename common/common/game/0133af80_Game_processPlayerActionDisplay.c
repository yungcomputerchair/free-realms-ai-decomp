// addr: 0x0133af80
// name: Game_processPlayerActionDisplay
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Game_processPlayerActionDisplay(int *param_1)

{
  uint *outIter;
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  undefined4 *extraout_EAX;
  undefined4 uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *puVar10;
  undefined8 uVar11;
  int unaff_retaddr;
  int *key;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Processes a player's action/display event, building display actions, command
                       objects, and state updates before dispatching game commands. Exact event type
                       is unclear. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167bb31;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  outIter = (uint *)(param_1 + 0x4f);
  pvVar6 = PlayArea_findPlayerElementById(param_1,param_1[0x4f]);
  piVar7 = (int *)unknown_getField30(pvVar6);
  key = (int *)0x2264f;
  cVar3 = (**(code **)(*piVar7 + 0x1c0))(0x2264f,uVar5);
  if (cVar3 == '\0') {
LAB_0133b12f:
    pvVar6 = (void *)0x0;
    bVar4 = Game_getFlag_14d(param_1);
    if (bVar4) {
      cVar3 = Game_getFlag_318();
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0xd0))(*outIter,-unaff_retaddr,0,0);
        pvStack_10 = Mem_Alloc(0x14);
        uStack_18 = 6;
        if (pvStack_10 != (void *)0x0) {
          pvVar6 = (void *)FUN_012f9eb0();
        }
        uStack_18 = 0xffffffff;
        FUN_012f8c70(0xa1);
        iVar8 = StateMachine_getCurrentState();
        DisplayActionBuilder_addIntArg(pvVar6,iVar8);
        DisplayActionBuilder_addIntArg(pvVar6,0x2233d);
        DisplayActionBuilder_addIntArg(pvVar6,*outIter);
        DisplayActionBuilder_addIntArg(pvVar6,unaff_retaddr);
        (**(code **)(*param_1 + 0x154))(pvVar6);
      }
    }
    else {
      iVar8 = param_1[0xfb];
      StdRbTreeInt_find(param_1 + 0xfa,auStack_3c,outIter,key);
      if (((int *)*extraout_EAX == (int *)0x0) || ((int *)*extraout_EAX != param_1 + 0xfa)) {
        FUN_00d83c2d();
      }
      if (extraout_EAX[1] == iVar8) {
        FUN_012fa9f0(0x240);
        puStack_8 = (undefined1 *)0x1;
        FUN_012fa910();
        puStack_8._1_3_ = (undefined3)((uint)puStack_8 >> 8);
        pvStack_1c = (void *)0x0;
        uStack_18 = 0;
        uStack_14 = 0;
        puStack_8._0_1_ = 3;
        FUN_0042c155(outIter);
        FUN_0042c155(&stack0x00000000);
        FUN_01300680(6);
        FUN_005f1e5c(auStack_20);
        pvVar6 = Mem_Alloc(0x38);
        puStack_8._0_1_ = 4;
        if (pvVar6 == (void *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)FUN_0141a550(param_1);
        }
        puStack_8._0_1_ = 3;
        set_field_4(pvVar6,*outIter);
        FUN_0141a630(auStack_30);
        FUN_0141a6e0(auStack_3c);
        Game_dispatchCommandToAllPlayers(param_1,pvVar6);
        Game_buildStateDisplayActionForPlayer(*outIter,unaff_retaddr);
        if (param_1[0xfc] == 1) {
          pvVar6 = Mem_Alloc(0x14);
          puStack_8._0_1_ = 5;
          if (pvVar6 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_012f9eb0();
          }
          puStack_8._0_1_ = 3;
          FUN_012f8c70(0x1ade6);
          (**(code **)(*param_1 + 0x154))(uVar9);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
        if (pvStack_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_1c);
        }
        pvStack_1c = (void *)0x0;
        uStack_18 = 0;
        uStack_14 = 0;
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        FUN_01300cd0();
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_01300cd0();
      }
    }
    uVar9 = 1;
  }
  else {
    bVar1 = false;
    bVar4 = false;
    puStack_2c = (undefined4 *)0x0;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    puStack_8 = (undefined1 *)0x0;
    PlayArea_findPlayerElementById(param_1,*outIter);
    PlayElement_getGame();
    piVar7 = (int *)FUN_0139d7c0();
    (**(code **)(*piVar7 + 0x34))(auStack_30);
    puVar10 = puStack_2c;
    iVar8 = extraout_EDX;
    if (puStack_28 < puStack_2c) {
      FUN_00d83c2d();
      iVar8 = extraout_EDX_00;
    }
    while( true ) {
      puVar2 = puStack_28;
      if (puStack_28 < puStack_2c) {
        FUN_00d83c2d();
        iVar8 = extraout_EDX_01;
      }
      if (puVar10 == puVar2) break;
      if (puStack_28 <= puVar10) {
        FUN_00d83c2d();
      }
      iVar8 = (**(code **)(*(int *)*puVar10 + 0x15c))(0x22974,0);
      if (iVar8 != 0x222e7) {
        bVar4 = true;
      }
      if (puStack_28 <= puVar10) {
        FUN_00d83c2d();
      }
      uVar11 = PlayElement_getId();
      iVar8 = (int)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == unaff_retaddr) {
        bVar1 = true;
      }
      if (puStack_28 <= puVar10) {
        FUN_00d83c2d();
        iVar8 = extraout_EDX_02;
      }
      puVar10 = puVar10 + 1;
    }
    if (bVar4) {
      piVar7 = find_play_element_in_maps(param_1,iVar8);
      iVar8 = (**(code **)(*piVar7 + 0x15c))(0x22974,0);
      if (iVar8 != 0x222e7) goto LAB_0133b0ff;
    }
    else {
LAB_0133b0ff:
      if (bVar1) {
        puStack_8 = (undefined1 *)0xffffffff;
        if (puStack_2c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_2c);
        }
        puStack_2c = (undefined4 *)0x0;
        puStack_28 = (undefined4 *)0x0;
        uStack_24 = 0;
        goto LAB_0133b12f;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_2c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
    uVar9 = 0;
  }
  ExceptionList = pvStack_10;
  return uVar9;
}

