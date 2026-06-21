// addr: 0x013602c0
// name: CWOfferAdjourn_sendOffer
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWOfferAdjourn_sendOffer(void * this, int playerId_) */

void __thiscall CWOfferAdjourn_sendOffer(void *this,int playerId_)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *key;
  undefined4 *extraout_EAX;
  bool *pbVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 local_48;
  void *local_44;
  int *local_3c;
  int local_34;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar8 = playerId_;
                    /* Handles offering to adjourn a match: logs the offer, marks the player, and
                       sends display text/actions. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167eb43;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  ExceptionList = &local_c;
  bVar4 = Game_isPlayerAllowedToAct(this,playerId_);
  if (!bVar4) {
    *(undefined1 *)((int)this + 0x360) = 0;
    Game_logGeneral(this,"Offering Adjourn! %d",iVar8);
    piVar1 = *(int **)((int)this + 0x338);
    if (piVar1 < *(int **)((int)this + 0x334)) {
      FUN_00d83c2d();
    }
    local_44 = PlayArea_findPlayerElementById(this,iVar8);
    local_3c = *(int **)((int)this + 0x334);
    if (*(int **)((int)this + 0x338) < local_3c) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar3 = local_3c;
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (piVar3 == piVar1) break;
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x338) <= piVar3) {
        FUN_00d83c2d();
      }
      iVar8 = *piVar3;
      local_48 = GamePlayer_getPlayerId();
      pvVar7 = (void *)((int)this + 0x1dc);
      RBTreeInt_lowerBound_flag15(pvVar7,local_30,&local_48,key);
      local_34 = *(int *)((int)this + 0x1e0);
      iVar2 = extraout_EAX[1];
      if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != pvVar7)) {
        FUN_00d83c2d();
      }
      if (iVar2 == local_34) {
        local_48 = GamePlayer_getPlayerId();
        pbVar5 = IntToBoolMap_getOrInsert(pvVar7,&local_48,key);
        *pbVar5 = false;
      }
      iVar2 = *(int *)((int)this + 0x13c);
      iVar6 = GamePlayer_getPlayerId();
      if ((iVar6 == iVar2) && (playerId_ == iVar2)) {
        GamePlayer_logFormattedMessage(this,iVar8,"You offer to adjourn the match.");
      }
      else if (local_44 != (void *)0x0) {
        Game_copyCommandObjectList(local_44,local_28);
        local_4 = 0;
        GamePlayer_logFormattedMessage(this,iVar8,"%s offers to adjourn the match.");
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
      }
      if (*(int **)((int)this + 0x338) <= local_3c) {
        FUN_00d83c2d();
      }
      local_3c = local_3c + 1;
      iVar8 = playerId_;
    }
    pbVar5 = IntToBoolMap_getOrInsert((void *)((int)this + 0x1dc),&playerId_,key);
    *pbVar5 = true;
    if (((iVar8 != *(int *)((int)this + 0x13c)) && (*(char *)((int)this + 0x14e) == '\0')) &&
       (pvVar7 = PlayArea_findPlayerElementById(this,iVar8), pvVar7 != (void *)0x0)) {
      playerId_ = (int)Mem_Alloc(0x14);
      local_4 = 1;
      if ((void *)playerId_ == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(0x2e);
      DisplayActionBuilder_addIntArg(pvVar7,*(int *)((int)this + 0x14));
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(pvVar7);
    }
  }
  ExceptionList = local_c;
  return;
}

