// addr: 0x01372ea0
// name: CWOfferAdjourn_acceptResponse
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWOfferAdjourn_acceptResponse(void * this, int playerId_, bool accepted_)
    */

void __thiscall CWOfferAdjourn_acceptResponse(void *this,int playerId_,bool accepted_)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *extraout_EAX;
  bool *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  undefined3 in_stack_00000009;
  int *local_48;
  int *local_44;
  void *local_40;
  undefined4 *local_3c;
  undefined4 *local_34;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Processes a response to an adjourn offer, updating acceptance, logging
                       accept/decline, broadcasting results, and completing when all accept. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01681061;
  local_c = ExceptionList;
  piVar5 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  uVar1 = *(uint *)((int)this + 0x338);
  if (uVar1 < *(uint *)((int)this + 0x334)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x334);
  local_3c = (undefined4 *)uVar2;
  if (*(uint *)((int)this + 0x338) < uVar2) {
    FUN_00d83c2d();
  }
  do {
    iVar3 = playerId_;
    if (this == (void *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    if (local_3c == (undefined4 *)uVar1) {
      Game_logGeneral(this,"Accept Adjourn! %d, %d",iVar3);
      local_44 = Mem_Alloc(0x28);
      local_4 = 0;
      if (local_44 == (int *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = GameCommand_AcceptAdjournment_ctor(local_44,this,piVar5);
      }
      local_4 = 0xffffffff;
      set_field_4(puVar7,iVar3);
      FUN_01430ec0(_accepted_);
      if (*(char *)((int)this + 0x362) == '\0') {
        if (iVar3 == 0) {
          Game_dispatchCommandToPlayers(this,puVar7);
        }
        else if (*(char *)((int)this + 0x14d) == '\0') {
          Game_dispatchCommandToPlayer(this,iVar3,puVar7);
        }
        else {
          Game_broadcastCallbackResultExceptPlayer(this,iVar3,puVar7);
        }
      }
      else {
        Game_logGeneral(this,"CW_ERROR: Server ignoring game commands!",piVar5);
        if (puVar7 != (undefined4 *)0x0) {
          (**(code **)*puVar7)(1);
        }
      }
      pvVar9 = (void *)((int)this + 0x1dc);
      pbVar6 = IntToBoolMap_getOrInsert(pvVar9,&playerId_,piVar5);
      *pbVar6 = accepted_;
      if (accepted_ == false) {
        pvVar9 = *(void **)(*(int *)((int)this + 0x1e0) + 4);
        if (*(char *)((int)pvVar9 + 0x15) == '\0') {
          FUN_0129a390(*(undefined4 *)((int)pvVar9 + 8));
                    /* WARNING: Subroutine does not return */
          _free(pvVar9);
        }
        *(int *)(*(int *)((int)this + 0x1e0) + 4) = *(int *)((int)this + 0x1e0);
        *(undefined4 *)((int)this + 0x1e4) = 0;
        *(undefined4 *)*(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)this + 0x1e0);
        *(int *)(*(int *)((int)this + 0x1e0) + 8) = *(int *)((int)this + 0x1e0);
        if (*(char *)((int)this + 0x360) == '\0') {
          *(undefined1 *)((int)this + 0x360) = 1;
          _accepted_ = PlayArea_findPlayerElementById(this,playerId_);
          local_44 = *(int **)((int)this + 0x338);
          if (local_44 < *(int **)((int)this + 0x334)) {
            FUN_00d83c2d();
          }
          piVar5 = *(int **)((int)this + 0x334);
          local_40 = (void *)((int)this + 0x330);
          if (*(int **)((int)this + 0x338) < piVar5) {
            FUN_00d83c2d();
          }
          while( true ) {
            if ((local_40 == (void *)0x0) || (local_40 != (void *)((int)this + 0x330))) {
              FUN_00d83c2d();
            }
            if (piVar5 == local_44) break;
            if (local_40 == (void *)0x0) {
              FUN_00d83c2d();
            }
            if (*(int **)((int)local_40 + 8) <= piVar5) {
              FUN_00d83c2d();
            }
            iVar3 = *piVar5;
            iVar4 = *(int *)((int)this + 0x13c);
            iVar8 = GamePlayer_getPlayerId();
            if ((iVar8 == iVar4) && (playerId_ == iVar4)) {
              GamePlayer_logFormattedMessage(this,iVar3,"You decline the adjourn offer.");
            }
            else if (_accepted_ != (void *)0x0) {
              Game_copyCommandObjectList(_accepted_,local_28);
              local_4 = 1;
              GamePlayer_logFormattedMessage(this,iVar3,"%s has declined the offer of adjournment.")
              ;
              local_4 = 0xffffffff;
              if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
                _free(local_24);
              }
              local_10 = 0xf;
              local_14 = 0;
              local_24 = (void *)((uint)local_24 & 0xffffff00);
            }
            if (*(int **)((int)local_40 + 8) <= piVar5) {
              FUN_00d83c2d();
            }
            piVar5 = piVar5 + 1;
          }
          playerId_ = (int)Mem_Alloc(0x14);
          local_4 = 2;
          if ((void *)playerId_ == (void *)0x0) {
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = (void *)FUN_012f9eb0();
          }
          local_4 = 0xffffffff;
          FUN_012f8c70(0x2f);
          DisplayActionBuilder_addIntArg(pvVar9,*(int *)((int)this + 0x14));
          DisplayActionManager_ensureSingleton();
          FUN_012d3550(pvVar9);
        }
      }
      else {
        _accepted_ = PlayArea_findPlayerElementById(this,playerId_);
        local_44 = *(int **)((int)this + 0x338);
        if (local_44 < *(int **)((int)this + 0x334)) {
          FUN_00d83c2d();
        }
        local_48 = *(int **)((int)this + 0x334);
        if (*(int **)((int)this + 0x338) < local_48) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (this == (void *)0xfffffcd0) {
            FUN_00d83c2d();
          }
          if (local_48 == local_44) break;
          if (this == (void *)0xfffffcd0) {
            FUN_00d83c2d();
          }
          if (*(int **)((int)this + 0x338) <= local_48) {
            FUN_00d83c2d();
          }
          iVar3 = *local_48;
          iVar4 = *(int *)((int)this + 0x13c);
          iVar8 = GamePlayer_getPlayerId();
          if ((iVar8 == iVar4) && (playerId_ == iVar4)) {
            GamePlayer_logFormattedMessage(this,iVar3,"You accept the adjourn offer.");
          }
          else if (_accepted_ != (void *)0x0) {
            Game_copyCommandObjectList(_accepted_,local_28);
            local_4 = 3;
            GamePlayer_logFormattedMessage(this,iVar3,"%s has accepted the offer of adjournment.");
            local_4 = 0xffffffff;
            if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
              _free(local_24);
            }
            local_10 = 0xf;
            local_14 = 0;
            local_24 = (void *)((uint)local_24 & 0xffffff00);
          }
          if (*(int **)((int)this + 0x338) <= local_48) {
            FUN_00d83c2d();
          }
          local_48 = local_48 + 1;
        }
        local_34 = *(undefined4 **)((int)this + 0x1e0);
        local_3c = (undefined4 *)*local_34;
        playerId_ = CONCAT31(playerId_._1_3_,1);
        local_40 = pvVar9;
        while( true ) {
          puVar7 = local_3c;
          pvVar10 = local_40;
          if ((local_40 == (void *)0x0) || (local_40 != pvVar9)) {
            FUN_00d83c2d();
          }
          if (puVar7 == local_34) break;
          if (pvVar10 == (void *)0x0) {
            FUN_00d83c2d();
          }
          if (puVar7 == *(undefined4 **)((int)pvVar10 + 4)) {
            FUN_00d83c2d();
          }
          if (*(char *)(puVar7 + 4) == '\0') {
            playerId_ = playerId_ & 0xffffff00;
          }
          FUN_01298330();
        }
        if ((char)playerId_ != '\0') {
          Game_logGeneral(this,"All players have accepted adjourn!",piVar5);
          playerId_ = (int)Mem_Alloc(0x14);
          local_4 = 4;
          if ((void *)playerId_ == (void *)0x0) {
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = (void *)FUN_012f9eb0();
          }
          local_4 = 0xffffffff;
          FUN_012f8c70(0x2f);
          DisplayActionBuilder_addIntArg(pvVar9,*(int *)((int)this + 0x14));
          DisplayActionManager_ensureSingleton();
          FUN_012d3550(pvVar9);
          (**(code **)(*(int *)this + 0x6c))();
        }
      }
      ExceptionList = local_c;
      return;
    }
    if (this == (void *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x338) <= local_3c) {
      FUN_00d83c2d();
    }
    local_44 = (int *)GamePlayer_getPlayerId();
    pvVar10 = (void *)((int)this + 0x1dc);
    RBTreeInt_lowerBound_flag15(pvVar10,local_30,&local_44,piVar5);
    pvVar9 = (void *)*extraout_EAX;
    local_34 = *(undefined4 **)((int)this + 0x1e0);
    iVar3 = extraout_EAX[1];
    if ((pvVar9 == (void *)0x0) || (pvVar9 != pvVar10)) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)iVar3 == local_34) {
      local_44 = (int *)GamePlayer_getPlayerId();
      pbVar6 = IntToBoolMap_getOrInsert(pvVar10,&local_44,piVar5);
      *pbVar6 = false;
    }
    else if (accepted_ == true) {
      if (pvVar9 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)((int)pvVar9 + 4)) {
        FUN_00d83c2d();
      }
      if (*(int *)(iVar3 + 0xc) == playerId_) {
        if (iVar3 == *(int *)((int)pvVar9 + 4)) {
          FUN_00d83c2d();
        }
        if (*(char *)(iVar3 + 0x10) == '\x01') {
          ExceptionList = local_c;
          return;
        }
      }
    }
    if (*(uint *)((int)this + 0x338) <= local_3c) {
      FUN_00d83c2d();
    }
    local_3c = (undefined4 *)((int)local_3c + 4);
  } while( true );
}

