// addr: 0x013463d0
// name: Player_sendAccountPreferences
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void Player_sendAccountPreferences(void * this) */

void __fastcall Player_sendAccountPreferences(void *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *map;
  void *pvVar4;
  int iVar5;
  int key_;
  undefined4 *puVar6;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined1 auStack_38 [4];
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Sends account preference records from the player account property set to the
                       game log/command stream. It asserts mGame, mAccountID, and the property set.
                        */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167cf98;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\game\\Player.cpp",0xd9,uVar3);
  }
  if (*(int *)((int)this + 0x38) == 0) {
    FUN_012f5a60("mAccountID","..\\common\\common\\game\\Player.cpp",0xda,uVar3);
  }
  Game_writeGameLog(*(undefined4 *)((int)this + 8),"#AccountPref\t%d\t%d",
                    *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
  LobbyAccount_ensureSingleton();
  pvVar4 = LobbyServiceAccountMap_findValue(map,key_);
  if (pvVar4 != (void *)0x0) {
    iVar5 = Account_getPropertySet();
    if (iVar5 == 0) {
      FUN_012f5a60("propertySet","..\\common\\common\\game\\Player.cpp",0xdf);
    }
    puStack_34 = (undefined4 *)0x0;
    puStack_30 = (undefined4 *)0x0;
    uStack_2c = 0;
    iStack_4 = 0;
    FUN_01312810(auStack_38);
    puVar2 = puStack_30;
    if (puStack_30 < puStack_34) {
      FUN_00d83c2d();
    }
    puVar6 = puStack_34;
    if (puStack_30 < puStack_34) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x38) {
        FUN_00d83c2d();
      }
      if (puVar6 == puVar2) break;
      FUN_012fa910();
      iStack_4 = CONCAT31(iStack_4._1_3_,1);
      if (&stack0x00000000 == (undefined1 *)0x38) {
        FUN_00d83c2d();
      }
      if (puStack_30 <= puVar6) {
        FUN_00d83c2d();
      }
      FUN_013111d0(*puVar6,auStack_44);
      pvVar4 = ValueData_toString(auStack_44,auStack_28);
      uVar1 = uStack_40;
      iStack_4._0_1_ = 2;
      if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
        iVar5 = (int)pvVar4 + 4;
      }
      else {
        iVar5 = *(int *)((int)pvVar4 + 4);
      }
      if (puStack_30 <= puVar6) {
        FUN_00d83c2d();
      }
      Game_writeGameLog(*(undefined4 *)((int)this + 8),"AccountPref\t%d\t %d\t%d\t%d\t%s",
                        *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38),*puVar6,
                        uVar1,iVar5);
      iStack_4 = CONCAT31(iStack_4._1_3_,1);
      if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      uStack_10 = 0xf;
      uStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_01300cd0();
      if (puStack_30 <= puVar6) {
        FUN_00d83c2d();
      }
      puVar6 = puVar6 + 1;
    }
    iStack_4 = 0xffffffff;
    if (puStack_34 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_34);
    }
  }
  ExceptionList = local_c;
  return;
}

