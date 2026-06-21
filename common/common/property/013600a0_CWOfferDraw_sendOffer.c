// addr: 0x013600a0
// name: CWOfferDraw_sendOffer
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWOfferDraw_sendOffer(void * this, int playerId_) */

void __thiscall CWOfferDraw_sendOffer(void *this,int playerId_)

{
  int *piVar1;
  int iVar2;
  int *key;
  bool *pbVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_30;
  void *local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar7 = playerId_;
                    /* Handles offering a draw: logs the offer, marks the player, creates display
                       actions, and emits player-facing draw-offer text. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167eb13;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x361) = 0;
  Game_logGeneral(this,"Offering Draw! %d",playerId_);
  piVar1 = *(int **)((int)this + 0x338);
  if (piVar1 < *(int **)((int)this + 0x334)) {
    FUN_00d83c2d();
  }
  local_2c = PlayArea_findPlayerElementById(this,iVar7);
  piVar6 = *(int **)((int)this + 0x334);
  if (*(int **)((int)this + 0x338) < piVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar1) break;
    if (this == (void *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x338) <= piVar6) {
      FUN_00d83c2d();
    }
    iVar7 = *piVar6;
    local_30 = GamePlayer_getPlayerId();
    pbVar3 = IntToBoolMap_getOrInsert((void *)((int)this + 0x1dc),&local_30,key);
    *pbVar3 = false;
    iVar2 = *(int *)((int)this + 0x13c);
    iVar4 = GamePlayer_getPlayerId();
    if ((iVar4 == iVar2) && (playerId_ == iVar2)) {
      GamePlayer_logFormattedMessage(this,iVar7,"You offer to draw the match.");
    }
    else if (local_2c != (void *)0x0) {
      Game_copyCommandObjectList(local_2c,local_28);
      local_4 = 0;
      GamePlayer_logFormattedMessage(this,iVar7,"%s offers to draw the match.");
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
    }
    if (*(int **)((int)this + 0x338) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
    iVar7 = playerId_;
  }
  pbVar3 = IntToBoolMap_getOrInsert((void *)((int)this + 0x1dc),&playerId_,key);
  *pbVar3 = true;
  if (((iVar7 != *(int *)((int)this + 0x13c)) && (*(char *)((int)this + 0x14e) == '\0')) &&
     (pvVar5 = PlayArea_findPlayerElementById(this,iVar7), pvVar5 != (void *)0x0)) {
    playerId_ = (int)Mem_Alloc(0x14);
    local_4 = 1;
    if ((void *)playerId_ == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x2d);
    DisplayActionBuilder_addIntArg(pvVar5,*(int *)((int)this + 0x14));
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(pvVar5);
  }
  ExceptionList = local_c;
  return;
}

