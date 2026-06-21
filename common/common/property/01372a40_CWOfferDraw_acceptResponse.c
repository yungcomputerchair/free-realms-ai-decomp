// addr: 0x01372a40
// name: CWOfferDraw_acceptResponse
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWOfferDraw_acceptResponse(void * this, int playerId_, bool accepted_) */

void __thiscall CWOfferDraw_acceptResponse(void *this,int playerId_,bool accepted_)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uVar5;
  int *piVar6;
  bool *pbVar7;
  int iVar8;
  void *pvVar9;
  void *this_00;
  int *piVar10;
  undefined4 *this_01;
  undefined3 in_stack_00000009;
  int *local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  bVar4 = accepted_;
  iVar1 = playerId_;
  uVar5 = _accepted_;
                    /* Processes a response to a draw offer, updating per-player acceptance, logging
                       accept/decline, and completing when all players accept. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01681011;
  local_c = ExceptionList;
  piVar6 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  Game_logGeneral(this,"Accept Draw! %d, %d",playerId_);
  _accepted_ = Mem_Alloc(0x28);
  this_01 = (undefined4 *)0x0;
  local_4 = 0;
  if (_accepted_ != (void *)0x0) {
    this_01 = GameCommand_AcceptDraw_ctor(_accepted_,this,piVar6);
  }
  local_4 = 0xffffffff;
  set_field_4(this_01,iVar1);
  FUN_014309e0(uVar5);
  Game_dispatchCommandToPlayerOrAll(iVar1,this_01);
  pvVar9 = (void *)((int)this + 0x1dc);
  pbVar7 = IntToBoolMap_getOrInsert(pvVar9,&playerId_,piVar6);
  *pbVar7 = bVar4;
  if (bVar4) {
    this_00 = PlayArea_findPlayerElementById(this,playerId_);
    _accepted_ = *(int **)((int)this + 0x338);
    if (_accepted_ < *(int **)((int)this + 0x334)) {
      FUN_00d83c2d();
    }
    local_2c = *(int **)((int)this + 0x334);
    if (*(int **)((int)this + 0x338) < local_2c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (local_2c == _accepted_) break;
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x338) <= local_2c) {
        FUN_00d83c2d();
      }
      iVar1 = *local_2c;
      iVar2 = *(int *)((int)this + 0x13c);
      iVar8 = GamePlayer_getPlayerId();
      if ((iVar8 == iVar2) && (playerId_ == iVar2)) {
        GamePlayer_logFormattedMessage(this,iVar1,"You accept the draw offer.");
      }
      else if (this_00 != (void *)0x0) {
        Game_copyCommandObjectList(this_00,local_28);
        local_4 = 3;
        GamePlayer_logFormattedMessage(this,iVar1,"%s has accepted the offer of a draw.");
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
      }
      if (*(int **)((int)this + 0x338) <= local_2c) {
        FUN_00d83c2d();
      }
      local_2c = local_2c + 1;
    }
    piVar10 = *(int **)((int)this + 0x1e0);
    piVar3 = (int *)*piVar10;
    playerId_ = CONCAT31(playerId_._1_3_,1);
    while( true ) {
      if (pvVar9 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (piVar3 == piVar10) break;
      if (pvVar9 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (piVar3 == (int *)*(int *)((int)this + 0x1e0)) {
        FUN_00d83c2d();
      }
      if (*(char *)(piVar3 + 4) == '\0') {
        playerId_ = playerId_ & 0xffffff00;
      }
      FUN_01298330();
    }
    if ((char)playerId_ != '\0') {
      Game_logGeneral(this,"All players have accepted draw!",piVar6);
      playerId_ = (int)Mem_Alloc(0x14);
      local_4 = 4;
      if ((void *)playerId_ == (void *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(0x2c);
      DisplayActionBuilder_addIntArg(pvVar9,*(int *)((int)this + 0x14));
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(pvVar9);
      (**(code **)(*(int *)this + 0x1dc))();
    }
  }
  else {
    FUN_0129a390(*(undefined4 *)(*(int *)((int)this + 0x1e0) + 4));
    *(int *)(*(int *)((int)this + 0x1e0) + 4) = *(int *)((int)this + 0x1e0);
    *(undefined4 *)((int)this + 0x1e4) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)this + 0x1e0);
    *(int *)(*(int *)((int)this + 0x1e0) + 8) = *(int *)((int)this + 0x1e0);
    if (*(char *)((int)this + 0x361) == '\0') {
      *(undefined1 *)((int)this + 0x361) = 1;
      _accepted_ = PlayArea_findPlayerElementById(this,playerId_);
      piVar6 = *(int **)((int)this + 0x338);
      if (piVar6 < *(int **)((int)this + 0x334)) {
        FUN_00d83c2d();
      }
      piVar10 = *(int **)((int)this + 0x334);
      if (*(int **)((int)this + 0x338) < piVar10) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (this == (void *)0xfffffcd0) {
          FUN_00d83c2d();
        }
        if (piVar10 == piVar6) break;
        if (this == (void *)0xfffffcd0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)this + 0x338) <= piVar10) {
          FUN_00d83c2d();
        }
        iVar1 = *piVar10;
        iVar2 = *(int *)((int)this + 0x13c);
        iVar8 = GamePlayer_getPlayerId();
        if ((iVar8 == iVar2) && (playerId_ == iVar2)) {
          GamePlayer_logFormattedMessage(this,iVar1,"You decline the draw offer.");
        }
        else if (_accepted_ != (void *)0x0) {
          Game_copyCommandObjectList(_accepted_,local_28);
          local_4 = 1;
          GamePlayer_logFormattedMessage(this,iVar1,"%s has declined the offer of a draw.");
          local_4 = 0xffffffff;
          if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
            _free(local_24);
          }
          local_10 = 0xf;
          local_14 = 0;
          local_24 = (void *)((uint)local_24 & 0xffffff00);
        }
        if (*(int **)((int)this + 0x338) <= piVar10) {
          FUN_00d83c2d();
        }
        piVar10 = piVar10 + 1;
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
      FUN_012f8c70(0x2c);
      DisplayActionBuilder_addIntArg(pvVar9,*(int *)((int)this + 0x14));
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(pvVar9);
    }
  }
  ExceptionList = local_c;
  return;
}

