// addr: 0x01346b60
// name: Player_drawCards
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01346d84) */
/* WARNING: Removing unreachable block (ram,0x01346daa) */
/* WARNING: Removing unreachable block (ram,0x01346d9b) */
/* WARNING: Removing unreachable block (ram,0x01346dac) */
/* Setting prototype: bool Player_drawCards(void * this, int count) */

bool __thiscall Player_drawCards(void *this,int count)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *outCard;
  int iVar7;
  int **outCard_00;
  int *piStack_2c;
  int *local_28;
  undefined4 auStack_24 [3];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Draws cards from the player draw pile into hand, logs each drawn card,
                       notifies the game, and queues draw-related game commands. Returns true after
                       processing. */
  puStack_8 = &LAB_0167d0a9;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  local_28 = (int *)0x0;
  piStack_2c = (int *)(uint)(uint3)piStack_2c;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  iVar6 = *(int *)((int)this + 0x34);
  iVar7 = count;
  pvVar3 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_addStateCounter(pvVar3,iVar6,iVar7);
  bVar1 = Game_getFlag_14d(*(void **)((int)this + 8));
  if (bVar1) {
    iVar6 = 0;
    if (0 < count) {
      do {
        outCard_00 = &local_28;
        FUN_0139d7a0(outCard_00,uVar2);
        bVar1 = Player_tryGetFirstZone3Card(outCard_00);
        if (!bVar1) break;
        if (local_28 == (int *)0x0) {
          FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Player.cpp",0x20b);
        }
        iVar7 = *local_28;
        uVar4 = FUN_0139d7c0();
        (**(code **)(iVar7 + 0x128))();
        if (piStack_2c != (int *)0x0) {
          Game_logGeneral(*(void **)((int)this + 8),"card drawn:",uVar4);
          (**(code **)(*piStack_2c + 0x154))(0);
        }
        local_28 = (int *)PlayElement_getId();
        FUN_0042c155(&local_28);
        outCard = auStack_24;
        auStack_24[0] = 0;
        FUN_0139d7a0();
        Player_tryGetFirstZone3Card(outCard);
        (**(code **)(**(int **)((int)this + 8) + 0x104))
                  (*(undefined4 *)((int)this + 0x34),piStack_2c);
        iVar6 = iVar6 + 1;
      } while (iVar6 < count);
    }
    pvVar3 = Mem_Alloc(0x48);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = GameCommand_DrawCards_ctorFromSource(pvVar3,*(void **)((int)this + 8));
    }
    local_4._0_1_ = 0;
    sub_01424f50();
    set_field_4(pvVar3,*(uint *)((int)this + 0x34));
    FUN_0139d7a0();
    pvVar5 = (void *)PlayElement_getId();
    GameCommand_DrawCards_setCard(pvVar3,pvVar5);
    Game_dispatchCommandToPlayer(*(void **)((int)this + 8),*(int *)((int)this + 0x34),pvVar3);
    pvVar3 = Mem_Alloc(0x48);
    local_4._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = GameCommand_DrawCards_ctorFromSource(pvVar3,*(void **)((int)this + 8));
    }
    local_4._0_1_ = 0;
    sub_01424f50();
    set_field_4(pvVar3,*(uint *)((int)this + 0x34));
    FUN_0139d7a0();
    pvVar5 = (void *)PlayElement_getId();
    GameCommand_DrawCards_setCard(pvVar3,pvVar5);
    Game_broadcastCallbackResultExceptPlayer
              (*(void **)((int)this + 8),*(int *)((int)this + 0x34),pvVar3);
  }
  local_4 = 0xffffffff;
  if (local_18 == (void *)0x0) {
    ExceptionList = local_c;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

