// addr: 0x0136e780
// name: Game_handleTimeUpForPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Game_handleTimeUpForPlayer(int *param_1)

{
  bool bVar1;
  int *key;
  int *piVar2;
  undefined4 *extraout_EAX;
  int iVar3;
  undefined4 *extraout_EAX_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 *this;
  uint value_;
  void *this_00;
  int local_70;
  void *local_6c;
  int local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int *local_54;
  int local_50 [2];
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Handles a player's timer expiring: writes '#Time up for player: %d', builds
                       display/action commands, updates timestamp/map state, and broadcasts commands
                       to players. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_01680826;
  local_14 = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff80);
  ExceptionList = &local_14;
  if (((param_1[0x91] != 0) && ((char)param_1[0x99] != '\0')) && ((char)param_1[0x76] == '\0')) {
    TimeStamp_setCurrentFtime(local_50);
    if (param_1[0x95] == 0) {
      param_1[0x95] = local_50[0];
    }
    if (0 < local_50[0] - param_1[0x95]) {
      piVar2 = (int *)FUN_01269090(local_38);
      local_58 = *piVar2;
      local_54 = (int *)piVar2[1];
      piVar2 = (int *)FUN_01269060(local_30);
      iVar4 = *piVar2;
      piVar2 = (int *)piVar2[1];
      local_68 = iVar4;
      while( true ) {
        local_64 = piVar2;
        if ((iVar4 == 0) || (iVar4 != local_58)) {
          FUN_00d83c2d();
        }
        if (piVar2 == local_54) break;
        if (iVar4 == 0) {
          FUN_00d83c2d();
        }
        if (*(int **)(iVar4 + 8) <= piVar2) {
          FUN_00d83c2d();
        }
        if (*piVar2 != 0) {
          local_70 = GamePlayer_getPlayerId();
          RBTreeInt_lowerBound_flag15(param_1 + 0x96,local_28,&local_70,key);
          local_48 = (int *)*extraout_EAX;
          iVar3 = extraout_EAX[1];
          local_34 = param_1[0x97];
          local_44 = iVar3;
          if ((local_48 == (int *)0x0) || (local_48 != param_1 + 0x96)) {
            FUN_00d83c2d();
          }
          iVar4 = local_68;
          piVar2 = local_64;
          if ((iVar3 != local_34) &&
             (iVar3 = FUN_013512b0(), iVar4 = local_68, piVar2 = local_64,
             *(char *)(iVar3 + 4) != '\0')) {
            StdRbTreeInt_find(param_1 + 0x92,local_20,&local_70,key);
            local_60 = *extraout_EAX_00;
            local_3c = param_1[0x93];
            local_5c = extraout_EAX_00[1];
            iVar3 = 0;
            local_40 = param_1 + 0x92;
            bVar1 = CheckedTreeIterator_notEquals(&local_60,&local_40);
            if (bVar1) {
              iVar4 = CheckedTreeIterator_derefValue_nodeFlag15();
              *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + (local_50[0] - param_1[0x95]);
              iVar4 = CheckedTreeIterator_derefValue_nodeFlag15();
              iVar3 = *(int *)(iVar4 + 4);
            }
            local_6c = Mem_Alloc(0x14);
            this_00 = (void *)0x0;
            local_c = 0;
            if (local_6c != (void *)0x0) {
              this_00 = (void *)FUN_012f9eb0();
            }
            local_c = 0xffffffff;
            FUN_012f8c70(0x45);
            DisplayActionBuilder_addIntArg(this_00,param_1[5]);
            DisplayActionBuilder_addIntArg(this_00,local_70);
            iVar4 = param_1[0x91] - iVar3;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            DisplayActionBuilder_addIntArg(this_00,iVar4);
            (**(code **)(*param_1 + 0x154))(this_00);
            iVar4 = local_68;
            piVar2 = local_64;
            if ((*(char *)((int)param_1 + 0x14d) != '\0') && (param_1[0x91] <= iVar3)) {
              uVar5 = GamePlayer_getPlayerId();
              Game_writeGameLog(param_1,"#Time up for player: %d",uVar5);
              local_6c = Mem_Alloc(0x2c);
              local_c = 1;
              if (local_6c == (void *)0x0) {
                this = (undefined4 *)0x0;
              }
              else {
                this = GameCommand_RemovePlayer_ctor(local_6c,param_1,key);
              }
              local_c = 0xffffffff;
              value_ = GamePlayer_getAccountId();
              set_field_4(this,value_);
              FUN_0142fd50(2);
              Game_dispatchCommandToAllPlayers(param_1,this);
              iVar4 = *param_1;
              uVar5 = GamePlayer_getPlayerId(2);
              (**(code **)(iVar4 + 0xb0))(uVar5);
              iVar4 = local_68;
              piVar2 = local_64;
            }
          }
        }
        if (*(int **)(iVar4 + 8) <= piVar2) {
          FUN_00d83c2d();
        }
        piVar2 = piVar2 + 1;
      }
      param_1[0x95] = local_50[0];
    }
  }
  ExceptionList = local_14;
  return;
}

