// addr: 0x01360530
// name: CWOfferAdjourn_promptAccept
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void CWOfferAdjourn_promptAccept(void * this, int playerId_) */

void __thiscall CWOfferAdjourn_promptAccept(void *this,int playerId_)

{
  int *key;
  undefined4 *extraout_EAX;
  bool *pbVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 in_stack_00000008;
  undefined4 local_68;
  void *local_64;
  int local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and sends the prompt asking whether the player accepts an adjourn
                       offer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167eb7b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_68;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff88);
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x1d8) == '\0') {
    *(undefined1 *)((int)this + 0x360) = 0;
    Game_logGeneral(this,"Offering Adjourn with message: %d, player: %d!",playerId_);
    pvVar3 = *(void **)((int)this + 0x338);
    local_64 = pvVar3;
    if (pvVar3 < *(uint *)((int)this + 0x334)) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)this + 0x334);
    if (*(uint *)((int)this + 0x338) < uVar2) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if ((void *)uVar2 == pvVar3) break;
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)this + 0x338) <= uVar2) {
        FUN_00d83c2d();
      }
      local_68 = GamePlayer_getPlayerId();
      pvVar3 = (void *)((int)this + 0x1dc);
      RBTreeInt_lowerBound_flag15(pvVar3,local_50,&local_68,key);
      local_5c = extraout_EAX[1];
      local_54 = *(int *)((int)this + 0x1e0);
      if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != pvVar3)) {
        FUN_00d83c2d();
      }
      if (local_5c == local_54) {
        local_68 = GamePlayer_getPlayerId();
        pbVar1 = IntToBoolMap_getOrInsert(pvVar3,&local_68,key);
        *pbVar1 = false;
      }
      if (*(uint *)((int)this + 0x338) <= uVar2) {
        FUN_00d83c2d();
      }
      uVar2 = uVar2 + 4;
      pvVar3 = local_64;
    }
    if (*(char *)((int)this + 0x14e) == '\0') {
      local_64 = Mem_Alloc(0x14);
      pvVar3 = (void *)0x0;
      local_4 = 0;
      if (local_64 != (void *)0x0) {
        pvVar3 = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(0x2e);
      DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x14));
      Game_getPlayerDisplayName(local_2c,in_stack_00000008);
      local_4 = 1;
      FUN_01249400(local_48,local_2c," is offering to Adjourn. Would you like to accept?");
      local_4._0_1_ = 2;
      DisplayActionBuilder_addStringArg(pvVar3,local_48);
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(pvVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      local_4 = 0xffffffff;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

