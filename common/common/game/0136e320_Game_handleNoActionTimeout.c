// addr: 0x0136e320
// name: Game_handleNoActionTimeout
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Game_handleNoActionTimeout(int *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int *key;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *extraout_EAX;
  undefined4 uVar7;
  undefined4 *extraout_EAX_00;
  bool *pbVar8;
  void *pvVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *this;
  undefined4 local_64;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [2];
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c;
  undefined1 local_28 [8];
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Handles no-action timeout warning/failure for a player: logs warnings, writes
                       '#No Action Time up for player', updates maps/timestamps, and sends
                       targeted/broadcast commands. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016807f1;
  local_14 = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff88);
  if (((char)param_1[0x76] != '\0') ||
     (((*(char *)((int)param_1 + 0x14d) == '\0' && ((char)param_1[0xc6] == '\0')) ||
      (param_1[0xa0] == 0)))) {
    return 0;
  }
  ExceptionList = &local_14;
  if (param_1[0xa0] < 3) {
    param_1[0xa0] = 3;
  }
  local_64 = 0;
  TimeStamp_setCurrentFtime(local_50);
  uVar1 = param_1[0xb];
  if (uVar1 < (uint)param_1[10]) {
    FUN_00d83c2d();
  }
  uVar11 = param_1[10];
  if ((uint)param_1[0xb] < uVar11) {
    FUN_00d83c2d();
  }
  do {
    local_2c = uVar11;
    if (param_1 == (int *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar11 == uVar1) {
      ExceptionList = local_14;
      return local_64;
    }
    if (param_1 == (int *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if ((uint)param_1[0xb] <= uVar11) {
      FUN_00d83c2d();
    }
    if (((void *)param_1[0x1a] == (void *)0x0) ||
       (uVar4 = get_field_8((void *)param_1[0x1a]), uVar4 == 0)) {
LAB_0136e72e:
      local_5c = (void *)GamePlayer_getPlayerId();
      piVar10 = IntDefaultMap_getOrInsert(param_1 + 0x9a,(int *)&local_5c);
      *piVar10 = local_50[0];
    }
    else {
      get_field_8((void *)param_1[0x1a]);
      iVar5 = GamePlayer_getPlayerId();
      if (iVar5 == 0) goto LAB_0136e72e;
      get_field_8((void *)param_1[0x1a]);
      iVar5 = GamePlayer_getPlayerId();
      iVar6 = GamePlayer_getPlayerId();
      if (iVar5 != iVar6) goto LAB_0136e72e;
      local_5c = (void *)GamePlayer_getPlayerId();
      StdRbTreeInt_find(param_1 + 0x9a,local_28,&local_5c,key);
      local_58 = *extraout_EAX;
      local_54 = extraout_EAX[1];
      local_44 = param_1[0x9b];
      local_48 = param_1 + 0x9a;
      bVar2 = CheckedTreeIterator_notEquals(&local_58,&local_48);
      if ((bVar2) && (iVar5 = CheckedTreeIterator_derefValue_nodeFlag15(), *(int *)(iVar5 + 4) != 0)
         ) {
        iVar5 = CheckedTreeIterator_derefValue_nodeFlag15();
        if (local_50[0] - *(int *)(iVar5 + 4) < param_1[0xa0]) {
          iVar5 = CheckedTreeIterator_derefValue_nodeFlag15();
          if (local_50[0] - *(int *)(iVar5 + 4) < param_1[0xa0] + -0x78) {
            local_5c = (void *)GamePlayer_getPlayerId();
            pbVar8 = IntToBoolMap_getOrInsert(param_1 + 0x9d,&local_5c,key);
            *pbVar8 = false;
          }
          else {
            local_5c = (void *)GamePlayer_getPlayerId();
            piVar10 = param_1 + 0x9d;
            RBTreeInt_lowerBound_flag15(piVar10,local_20,&local_5c,key);
            local_38 = *extraout_EAX_00;
            local_3c = param_1[0x9e];
            local_34 = extraout_EAX_00[1];
            local_40 = piVar10;
            cVar3 = FUN_01297690(&local_40);
            if (cVar3 != '\0') {
              local_5c = (void *)GamePlayer_getPlayerId();
              pbVar8 = IntToBoolMap_getOrInsert(piVar10,&local_5c,key);
              *pbVar8 = false;
            }
            local_5c = (void *)GamePlayer_getPlayerId();
            pbVar8 = IntToBoolMap_getOrInsert(piVar10,&local_5c,key);
            if (*pbVar8 == false) {
              local_5c = (void *)GamePlayer_getPlayerId();
              pbVar8 = IntToBoolMap_getOrInsert(piVar10,&local_5c,key);
              *pbVar8 = true;
              uVar7 = GamePlayer_getPlayerId();
              Game_logGeneral(param_1,"Sending a warning for player: %d",uVar7);
              iVar5 = (param_1[0xa0] + -0x78) / 0x3c;
              local_5c = Mem_Alloc(0x14);
              local_c = 1;
              if (local_5c == (void *)0x0) {
                pvVar9 = (void *)0x0;
              }
              else {
                pvVar9 = LobbyCommand_InfoEnumMessage_ctor(local_5c);
              }
              local_c = 0xffffffff;
              FUN_0142f2f0(0x20);
              PickListItem_setFirstIntValue(pvVar9,iVar5);
              iVar6 = GamePlayer_getPlayerId();
              Game_dispatchCommandToPlayer(param_1,iVar6,pvVar9);
              local_5c = Mem_Alloc(0x14);
              local_c = 2;
              if (local_5c == (void *)0x0) {
                pvVar9 = (void *)0x0;
              }
              else {
                pvVar9 = LobbyCommand_InfoEnumMessage_ctor(local_5c);
              }
              local_c = 0xffffffff;
              FUN_0142f2f0(0x21);
              iVar6 = GamePlayer_getAccountId();
              PickListItem_setFirstIntValue(pvVar9,iVar6);
              PickListItem_setSecondIntValue(pvVar9,iVar5);
              iVar5 = GamePlayer_getPlayerId();
              Game_broadcastCallbackResultExceptPlayer(param_1,iVar5,pvVar9);
              uVar11 = local_2c;
            }
          }
        }
        else {
          uVar7 = GamePlayer_getPlayerId();
          Game_writeGameLog(param_1,"#No Action Time up for player: %d",uVar7);
          uVar7 = GamePlayer_getPlayerId();
          Game_logGeneral(param_1,"No action time up for player: %d",uVar7);
          local_5c = Mem_Alloc(0x2c);
          this = (undefined4 *)0x0;
          local_c = 0;
          if (local_5c != (void *)0x0) {
            this = GameCommand_RemovePlayer_ctor(local_5c,param_1,key);
          }
          local_c = 0xffffffff;
          uVar4 = GamePlayer_getAccountId();
          set_field_4(this,uVar4);
          FUN_0142fd50(2);
          Game_dispatchCommandToAllPlayers(param_1,this);
          iVar5 = *param_1;
          uVar7 = GamePlayer_getPlayerId(2);
          (**(code **)(iVar5 + 0xb0))(uVar7);
          local_64 = GamePlayer_getAccountId();
        }
      }
    }
    if ((uint)param_1[0xb] <= uVar11) {
      FUN_00d83c2d();
    }
    uVar11 = uVar11 + 4;
  } while( true );
}

