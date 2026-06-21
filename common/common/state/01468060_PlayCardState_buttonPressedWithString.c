// addr: 0x01468060
// name: PlayCardState_buttonPressedWithString
// subsystem: common/common/state
// source (binary assert): common/common/state/PlayCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PlayCardState_buttonPressedWithString(void * this, int playerId_, int
   buttonId_, void * buttonText) */

uint __thiscall
PlayCardState_buttonPressedWithString(void *this,int playerId_,int buttonId_,void *buttonText)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 unaff_retaddr;
  char *fmt;
  uint local_d4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [4];
  void *local_cc;
  undefined4 local_bc;
  uint local_b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_b4 [4];
  void *local_b0;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [4];
  void *local_94;
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c [4];
  void *local_78;
  undefined4 local_68;
  uint local_64 [7];
  undefined1 auStack_48 [28];
  undefined1 auStack_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles a PlayCardState button press with text, logging player/button/text,
                       accepting done/yes responses, and prompting or delegating exactly like the
                       non-string button handler. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e1e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar10 = 0;
  local_d4 = 0;
  if (*(uint *)((int)buttonText + 0x18) < 0x10) {
    iVar5 = (int)buttonText + 4;
  }
  else {
    iVar5 = *(int *)((int)buttonText + 4);
  }
  fmt = "PlayCardState::buttonPressedWithString: playerid: %d, buttonID: %d, buttonText: %s";
  iVar7 = playerId_;
  pvVar4 = (void *)StateMachineState_getGame
                             ("PlayCardState::buttonPressedWithString: playerid: %d, buttonID: %d, buttonText: %s"
                              ,playerId_,buttonId_,iVar5,DAT_01b839d8 ^ (uint)&stack0xffffff18);
  Game_logGeneral(pvVar4,fmt,iVar7);
  StateMachineState_getActivePlayer();
  iVar5 = GamePlayer_getPlayerId();
  if (iVar5 != playerId_) {
    StateMachineState_getActivePlayer(playerId_);
    uVar6 = GamePlayer_getPlayerId();
    uVar6 = StateMachineState_getGame("Got an buttonPressed from %d instead of %d.",uVar6);
    Game_logGeneralFormatted(uVar6);
    (**(code **)(*(int *)this + 0x88))();
    ExceptionList = local_c;
    return 0;
  }
  if (buttonId_ == 1) {
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = (void *)((uint)local_cc & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_d0,"done",4);
    local_4 = 0;
    local_d4 = 1;
    iVar5 = FUN_0145d850(local_98,local_d0);
    local_4 = 1;
    uVar10 = 3;
    local_d4 = 3;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar7 = iVar5 + 4;
    }
    else {
      iVar7 = *(int *)(iVar5 + 4);
    }
    iVar5 = FUN_00f942a0(0,*(undefined4 *)((int)buttonText + 0x14),iVar7,
                         *(undefined4 *)(iVar5 + 0x14));
    if (iVar5 != 0) {
      if (*(char *)((int)this + 0xf9) == '\x01') {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_b4,"yes");
        local_4 = 2;
        local_d4 = 7;
        uVar6 = FUN_0145d850(local_7c,local_b4);
        local_4 = 3;
        uVar10 = 0xf;
        local_d4 = 0xf;
        cVar2 = FUN_01237a70(buttonText,uVar6);
        if (cVar2 != '\0') goto LAB_014681f5;
      }
      goto LAB_014681fc;
    }
LAB_014681f5:
    bVar3 = true;
  }
  else {
LAB_014681fc:
    bVar3 = false;
  }
  local_4 = 2;
  if ((uVar10 & 8) != 0) {
    uVar10 = uVar10 & 0xfffffff7;
    local_d4 = uVar10;
    if (0xf < local_64[0]) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    local_64[0] = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
  }
  local_4 = 1;
  if ((uVar10 & 4) != 0) {
    uVar10 = uVar10 & 0xfffffffb;
    local_d4 = uVar10;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_b0);
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = (void *)((uint)local_b0 & 0xffffff00);
  }
  local_4 = 0;
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    local_d4 = uVar10;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94 = (void *)((uint)local_94 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  if ((uVar10 & 1) != 0) {
    local_d4 = uVar10 & 0xfffffffe;
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = (void *)((uint)local_cc & 0xffffff00);
  }
  if (bVar3) {
    if ((*(char *)((int)this + 0xf8) == '\0') && (*(char *)((int)this + 0xf9) == '\0')) {
      pvVar4 = (void *)get_field_4(*(void **)((int)this + 8));
      bVar3 = Game_getFlag_14d(pvVar4);
      if (!bVar3) {
        iVar5 = playerId_;
        pvVar4 = (void *)StateMachineState_getGame();
        pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar5);
        if (pvVar4 == (void *)0x0) {
          FUN_012f5a60("playerptr","..\\common\\common\\state\\PlayCardState.cpp",0x167);
        }
        piVar8 = (int *)StateMachineState_getGame();
        cVar2 = (**(code **)(*piVar8 + 0x174))(pvVar4);
        if (cVar2 == '\0') {
          uVar10 = (**(code **)(*(int *)this + 0x7c))(playerId_);
          ExceptionList = local_c;
          return uVar10;
        }
        *(undefined1 *)((int)this + 0xf9) = 1;
        MessageText_ctor();
        puStack_8 = (undefined1 *)0x4;
        MessageText_ctor();
        puStack_8._0_1_ = 5;
        iVar5 = StateMachineState_getGame();
        set_pair_fields_4_8(&local_9c,0x28ba,*(uint *)(iVar5 + 0x20));
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d4,"no"
                  );
        puStack_8._0_1_ = 6;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b8,
                   "yes");
        puStack_8._0_1_ = 7;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,"");
        puStack_8._0_1_ = 8;
        uVar6 = FUN_0145d850(auStack_2c,&local_d4);
        puStack_8._0_1_ = 9;
        uVar9 = FUN_0145d850(auStack_48,&local_b8);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
        (**(code **)(*(int *)this + 0x8c))(unaff_retaddr,&local_80,&local_9c,uVar9,uVar6,local_64);
        local_4._0_1_ = 9;
        FUN_0041f1d7();
        local_4._0_1_ = 8;
        FUN_0041f1d7();
        local_4._0_1_ = 7;
        FUN_0041f1d7();
        local_4._0_1_ = 6;
        FUN_0041f1d7();
        local_4._0_1_ = 5;
        FUN_0041f1d7();
        local_4 = CONCAT31(local_4._1_3_,4);
        MessageText_dtor();
        local_4 = 0xffffffff;
        MessageText_dtor();
        goto LAB_01468545;
      }
    }
    uVar10 = (**(code **)(*(int *)this + 0x7c))(playerId_);
  }
  else {
    if (buttonId_ == 2) {
      pcVar1 = *(code **)(*(int *)this + 0x88);
      *(undefined1 *)((int)this + 0xf9) = 0;
      *(undefined1 *)((int)this + 0xf8) = 1;
      (*pcVar1)();
    }
    (**(code **)(*(int *)this + 0x88))();
LAB_01468545:
    uVar10 = 2;
  }
  ExceptionList = local_c;
  return uVar10;
}

