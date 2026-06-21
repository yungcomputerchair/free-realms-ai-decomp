// addr: 0x01472cc0
// name: DoublePassState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DoublePassState_buttonPressed(void * this, int playerId_, int button_) */

int __thiscall DoublePassState_buttonPressed(void *this,int playerId_,int button_)

{
  void *pvVar1;
  void *game;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint local_b4;
  undefined1 local_b0;
  void *pvStack_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94;
  void *pvStack_90;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_78;
  void *pvStack_74;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60 [2];
  void *pvStack_58;
  undefined4 uStack_48;
  uint local_44 [7];
  undefined1 local_28 [12];
  undefined1 uStack_1c;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles DoublePass button press; logs state/button, processes pass button
                       when in state 3, otherwise logs wrong-state and falls back. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f366;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff3c);
  ExceptionList = &local_c;
  pcVar5 = "DOUBLEPASS::BUTTONPRESSED player: %d, button: %d";
  iVar4 = playerId_;
  game = (void *)StateMachineState_getGame
                           ("DOUBLEPASS::BUTTONPRESSED player: %d, button: %d",playerId_,button_);
  Game_logGeneral(game,pcVar5,iVar4);
  if (*(int *)((int)this + 0x128) == 3) {
    if (button_ == 1) {
      MessageText_ctor();
      local_4 = 0;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b4,"0",1)
      ;
      local_4._0_1_ = 1;
      local_80 = 0xf;
      local_84 = 0;
      local_94 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,"0",1)
      ;
      local_4._0_1_ = 2;
      local_64 = 0xf;
      local_68 = 0;
      local_78 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_7c,"",0);
      local_4._0_1_ = 3;
      uVar2 = FUN_0145d850(local_44,&local_b4);
      local_4._0_1_ = 4;
      uVar3 = FUN_0145d850(local_60,&local_98);
      local_4 = CONCAT31(local_4._1_3_,5);
      (**(code **)(*(int *)this + 0x8c))(playerId_,&local_7c,local_28,uVar3,uVar2,local_28);
      uStack_1c = 4;
      if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_74);
      }
      local_60[0] = 0xf;
      local_64 = 0;
      pvStack_74 = (void *)((uint)pvStack_74 & 0xffffff00);
      uStack_1c = 3;
      if (0xf < local_44[0]) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_58);
      }
      local_44[0] = 0xf;
      uStack_48 = 0;
      pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
      uStack_1c = 2;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_90);
      }
      local_7c = 0xf;
      local_80 = 0;
      pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
      uStack_1c = 1;
      if (local_98 < 0x10) {
        local_98 = 0xf;
        local_9c = 0;
        pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
        uStack_1c = 0;
        if (local_b4 < 0x10) {
          local_b4 = 0xf;
          uVar6 = (uint)pvVar1 & 0xffffff00;
          iVar4 = (**(code **)(*(int *)this + 0x80))(uStack_14);
          local_4 = 0xffffffff;
          MessageText_dtor(uVar6);
          ExceptionList = local_c;
          return iVar4;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
  }
  else {
    pcVar5 = "Player buttonPressed in wrong state! playerid: %d";
    pvVar1 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar1,pcVar5,playerId_);
  }
  (**(code **)(*(int *)this + 0x88))();
  ExceptionList = local_c;
  return 0;
}

