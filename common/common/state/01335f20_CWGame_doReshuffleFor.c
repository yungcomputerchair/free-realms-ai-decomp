// addr: 0x01335f20
// name: CWGame_doReshuffleFor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_doReshuffleFor(void * game, int playerId_) */

void __thiscall CWGame_doReshuffleFor(void *this,void *game,int playerId_)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Performs a reshuffle for a player, logging CWGame::doReshuffleFor, finding
                       the player element, and invoking the shuffle command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b4c8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  Game_logGeneral(this,"CWGame::doReshuffleFor( %d )",game);
  pvVar3 = PlayArea_findPlayerElementById(this,(int)game);
  if (pvVar3 != (void *)0x0) {
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_4 = 0;
    PlayElement_getGame(uVar2);
    pvVar3 = (void *)FUN_0139d7a0();
    if (pvVar3 != (void *)0x0) {
      PlayElement_getGame(uVar2);
      piVar4 = (int *)Player_getDiscardPile();
      (**(code **)(*piVar4 + 0x34))(local_1c);
      puVar5 = local_18;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar1 = local_14;
        if (local_14 < local_18) {
          FUN_00d83c2d();
        }
        if (puVar5 == puVar1) break;
        if (local_14 <= puVar5) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)*puVar5 + 0x128))(pvVar3);
        if (local_14 <= puVar5) {
          FUN_00d83c2d();
        }
        puVar5 = puVar5 + 1;
      }
      CommandObjectShuffle_doShuffle(pvVar3);
    }
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

