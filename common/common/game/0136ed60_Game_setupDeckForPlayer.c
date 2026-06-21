// addr: 0x0136ed60
// name: Game_setupDeckForPlayer
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_setupDeckForPlayer(void * this, void * player, void * deck) */

bool __thiscall Game_setupDeckForPlayer(void *this,void *player,void *deck)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *this_00;
  uint value_;
  void *deck_00;
  int *piVar7;
  char *pcVar8;
  uint uStack_478;
  undefined1 local_460 [4];
  void *local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  void *local_444;
  undefined4 local_440;
  void *local_43c;
  undefined1 local_438 [4];
  char *local_434;
  undefined4 local_430;
  undefined4 local_42c;
  void *local_428;
  void *local_424;
  char local_41e;
  undefined1 local_41d;
  undefined1 *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  uint local_410;
  undefined1 local_40c [4];
  undefined4 ***local_408 [5];
  uint local_3f4;
  char local_3f0 [1000];
  uint local_8;
  
                    /* Sets up a player deck, logs deck identity, sends SetupDeck phase messaging,
                       updates player/deck maps, queues select-deck commands, and dispatches event
                       id 0xe. It asserts player, deck, and current turn. */
  puStack_414 = &LAB_016808e1;
  local_418 = ExceptionList;
  uStack_478 = DAT_01b839d8 ^ (uint)local_40c;
  local_41c = (undefined1 *)&uStack_478;
  ExceptionList = &local_418;
  local_43c = player;
  local_424 = deck;
  local_410 = 0;
  local_428 = this;
  puVar1 = &uStack_478;
  local_8 = uStack_478;
  if (player == (void *)0x0) {
    FUN_012f5a60("player","..\\common\\common\\game\\Game.cpp",0xafc);
    puVar1 = (uint *)local_41c;
  }
  local_41c = (undefined1 *)puVar1;
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\common\\game\\Game.cpp",0xafd);
  }
  if (*(char *)((int)this + 0x14d) != '\0') {
    iVar4 = *(int *)this;
    uVar3 = GamePlayer_getPlayerId(local_424);
    (**(code **)(iVar4 + 0x1e8))(uVar3);
    deck = local_424;
  }
  if (deck == (void *)0x0) {
    local_434 = "<REALLY ITS A NULL DECK>";
    pcVar8 = "<NULL DECK>";
  }
  else {
    iVar4 = OffsetAdjustor_plus3C();
    if (*(uint *)(iVar4 + 0x18) < 0x10) {
      local_434 = (char *)(iVar4 + 4);
    }
    else {
      local_434 = *(char **)(iVar4 + 4);
    }
    pvVar5 = Deck_getPropertyList(deck);
    if (*(uint *)((int)pvVar5 + 0x18) < 0x10) {
      pcVar8 = (char *)((int)pvVar5 + 4);
    }
    else {
      pcVar8 = *(char **)((int)pvVar5 + 4);
    }
  }
  if (player == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = GamePlayer_getPlayerId();
  }
  Game_writeGameLog(this,"setupDeckForPlayer\t%d\t%s\t%s",uVar3,pcVar8,local_434);
  local_45c = Mem_Alloc(0x14);
  local_410._0_1_ = 1;
  if (local_45c == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)FUN_012f9eb0();
  }
  local_410._0_1_ = 0;
  FUN_012f8c70(0x15);
  DisplayActionBuilder_addIntArg(pvVar5,*(int *)((int)this + 0x14));
  FUN_01356600(local_40c);
  local_410 = CONCAT31(local_410._1_3_,2);
  if (local_3f4 < 0x10) {
    local_408[0] = local_408;
  }
  _sprintf(local_3f0,"MatchID: %s Turn: 0 PhaseName: SetupDeck",local_408[0]);
  DisplayActionBuilder_addCStringArg(pvVar5,local_3f0);
  (**(code **)(*(int *)this + 0x154))(pvVar5);
  if ((*(char *)((int)this + 0x14d) != '\0') ||
     (local_41d = (**(code **)(*(int *)player + 0x3c))(local_424),
     *(char *)((int)this + 0x14d) != '\0')) {
    local_434 = (char *)GamePlayer_getPlayerId();
    pvVar5 = (void *)((int)this + 0x210);
    puVar6 = IntObjectMap_getOrInsert(pvVar5,(int *)&local_434);
    *puVar6 = local_424;
    local_41e = '\x01';
    local_430 = 0;
    local_458 = 0;
    local_44c = 0;
    puVar6 = (undefined4 *)FUN_01269090(&local_444);
    local_458 = *puVar6;
    local_454 = puVar6[1];
    puVar6 = (undefined4 *)FUN_01269060(&local_444);
    local_430 = *puVar6;
    local_42c = puVar6[1];
    while (cVar2 = FUN_01268ea0(&local_458), cVar2 != '\0') {
      FUN_01268e40();
      local_424 = (void *)GamePlayer_getPlayerId();
      puVar6 = (undefined4 *)FUN_01331e20(local_460,&local_424);
      local_44c = *puVar6;
      local_448 = puVar6[1];
      local_440 = *(undefined4 *)((int)this + 0x214);
      local_444 = pvVar5;
      cVar2 = FUN_0132c380(&local_444);
      if (cVar2 != '\0') {
        local_41e = '\0';
      }
      FUN_0132e500(local_438,0);
    }
    if (local_41e != '\0') {
      puVar6 = (undefined4 *)FUN_01269060(&local_44c);
      local_430 = *puVar6;
      local_42c = puVar6[1];
      while (cVar2 = FUN_01268ea0(&local_458), cVar2 != '\0') {
        puVar6 = (undefined4 *)FUN_01268e40();
        piVar7 = (int *)*puVar6;
        local_45c = (void *)GamePlayer_getPlayerId();
        iVar4 = *piVar7;
        puVar6 = IntObjectMap_getOrInsert(pvVar5,(int *)&local_45c);
        (**(code **)(iVar4 + 0x3c))(*puVar6);
        local_434 = Mem_Alloc(0x44);
        local_410._0_1_ = 3;
        if (local_434 == (char *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)GameCommand_SelectDeckForPlayer_ctor(local_428);
        }
        local_410 = CONCAT31(local_410._1_3_,2);
        value_ = GamePlayer_getPlayerId();
        set_field_4(this_00,value_);
        deck_00 = (void *)unknown_getField28(piVar7);
        GameCommand_SelectDeckForPlayer_setDeck(this_00,deck_00);
        Game_dispatchCommandToAllPlayers(local_428,this_00);
        FUN_0132e500(&local_44c,0);
        this = local_428;
      }
    }
  }
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("getCurrentTurn()","..\\common\\common\\game\\Game.cpp",0xb3b);
  }
  local_450 = 0;
  local_450 = GamePlayer_getPlayerId();
  piVar7 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  local_41d = (**(code **)(*piVar7 + 0x38))(0xe,&local_450);
  local_410 = local_410 & 0xffffff00;
  FUN_0041f1d7();
  ExceptionList = local_418;
  return (bool)local_41d;
}

