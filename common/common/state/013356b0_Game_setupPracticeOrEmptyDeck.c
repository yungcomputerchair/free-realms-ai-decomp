// addr: 0x013356b0
// name: Game_setupPracticeOrEmptyDeck
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_setupPracticeOrEmptyDeck(void * game, void * player) */

void __thiscall Game_setupPracticeOrEmptyDeck(void *this,void *game,void *player)

{
  void *pvVar1;
  int iVar2;
  void *local_60;
  undefined1 local_5c [4];
  void *local_58;
  int local_54;
  undefined4 local_50;
  void *local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Sets up a player deck for practice or empty-deck cases using collection
                       references and player id. */
  puStack_8 = &LAB_0167b38e;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_60;
  ExceptionList = &local_c;
  if (game != (void *)0x0) {
    local_4c = this;
    if (*(int *)((int)this + 0x288) == 0x1adb4) {
      local_58 = (void *)0x0;
      local_54 = 0;
      local_50 = 0;
      local_4 = 0;
      if (player == (void *)0x0) {
        local_60 = Mem_Alloc(0x94);
        local_4._0_1_ = 1;
        if (local_60 == (void *)0x0) {
          player = (void *)0x0;
        }
        else {
          player = (void *)CWDeck_ctor();
        }
        local_4._0_1_ = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c,"practice deck");
        local_4._0_1_ = 2;
        FUN_013ce780(local_2c);
        pvVar1 = CollectionReference_getCollection(game);
        iVar2 = GamePlayer_getPlayerId();
        PropertyCommand_emitRandomizedIds(player,iVar2 == 2,pvVar1);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28);
        }
        local_14 = 0xf;
        local_18 = 0;
        local_28 = (void *)((uint)local_28 & 0xffffff00);
      }
      else {
        (**(code **)(*(int *)player + 0x4c))(local_5c,DAT_01b839d8 ^ (uint)&stack0xffffff94);
        if ((local_58 == (void *)0x0) || (local_54 - (int)local_58 >> 2 == 0)) {
          pvVar1 = CollectionReference_getCollection(game);
          PropertyCommand_emitNonRandomizedIds(player,pvVar1);
        }
      }
      local_4 = 0xffffffff;
      if (local_58 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_58);
      }
      local_58 = (void *)0x0;
      local_54 = 0;
      local_50 = 0;
    }
    local_4 = 0xffffffff;
    if (player == (void *)0x0) {
      local_60 = Mem_Alloc(0x94);
      local_4 = 3;
      if (local_60 == (void *)0x0) {
        player = (void *)0x0;
      }
      else {
        player = (void *)CWDeck_ctor();
      }
      local_4 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_48,"empty deck",10);
      local_4 = 4;
      FUN_013ce780(local_48);
      pvVar1 = CollectionReference_getCollection(game);
      iVar2 = GamePlayer_getPlayerId();
      PropertyCommand_emitRandomizedIds(player,iVar2 == 2,pvVar1);
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
    }
    local_4 = 0xffffffff;
    Game_setupDeckForPlayer(local_4c,game,player);
  }
  ExceptionList = local_c;
  return;
}

