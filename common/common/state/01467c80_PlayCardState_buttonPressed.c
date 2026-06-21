// addr: 0x01467c80
// name: PlayCardState_buttonPressed
// subsystem: common/common/state
// source (binary assert): common/common/state/PlayCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PlayCardState_buttonPressed(void * this, int playerId_, int buttonId_) */

uint __thiscall PlayCardState_buttonPressed(void *this,int playerId_,int buttonId_)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 uVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  uint local_d4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [4];
  void *local_cc;
  undefined4 local_bc;
  uint local_b8 [7];
  undefined1 auStack_9c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_80 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_64 [28];
  undefined1 auStack_48 [28];
  undefined1 auStack_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles PlayCardState button presses, rejecting presses from the wrong
                       player, toggling tutorial/selection flags, and either prompting the player
                       with yes/no choices or delegating to the play-card action path. Evidence is
                       PlayCardState.cpp plus the wrong-player log and isTutorial/playerptr strings.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e0fe;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff1c;
  ExceptionList = &local_c;
  local_d4 = 0;
  StateMachineState_getActivePlayer(uVar4);
  iVar5 = GamePlayer_getPlayerId();
  if (iVar5 != playerId_) {
    StateMachineState_getActivePlayer(uVar4);
    uVar6 = GamePlayer_getPlayerId();
    uVar6 = StateMachineState_getGame("Got an buttonPressed from %d instead of %d.",playerId_,uVar6)
    ;
    Game_logGeneralFormatted(uVar6);
    (**(code **)(*(int *)this + 0x88))();
    ExceptionList = local_c;
    return 0;
  }
  local_b8[0] = 0xf;
  local_bc = 0;
  local_cc = (void *)((uint)local_cc & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_d0,"isTutorial",10);
  local_4 = 0;
  pbVar10 = local_d0;
  pvVar7 = (void *)get_field_4(*(void **)((int)this + 8));
  iVar5 = Game_findNamedEntryValue(pvVar7,pbVar10);
  local_4 = 0xffffffff;
  if (0xf < local_b8[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  local_b8[0] = 0xf;
  local_bc = 0;
  local_cc = (void *)((uint)local_cc & 0xffffff00);
  if (iVar5 == 1) {
    *(undefined1 *)((int)this + 0xf9) = 1;
  }
  if (buttonId_ != 1) {
    if (buttonId_ == 2) {
      pcVar1 = *(code **)(*(int *)this + 0x88);
      *(undefined1 *)((int)this + 0xf9) = 0;
      *(undefined1 *)((int)this + 0xf8) = 1;
      (*pcVar1)();
    }
    (**(code **)(*(int *)this + 0x88))();
    ExceptionList = local_c;
    return 2;
  }
  if ((*(char *)((int)this + 0xf8) == '\0') && (*(char *)((int)this + 0xf9) == '\0')) {
    pvVar7 = (void *)get_field_4(*(void **)((int)this + 8));
    bVar2 = Game_getFlag_14d(pvVar7);
    if (!bVar2) {
LAB_01467dff:
      bVar2 = false;
      goto LAB_01467e05;
    }
    get_field_4(*(void **)((int)this + 8));
    cVar3 = Game_getFlag_318();
    if (cVar3 != '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d0,"isTutorial");
      local_4 = 1;
      pbVar10 = local_d0;
      local_d4 = 1;
      pvVar7 = (void *)get_field_4(*(void **)((int)this + 8));
      iVar5 = Game_findNamedEntryValue(pvVar7,pbVar10);
      if (iVar5 != 1) goto LAB_01467dff;
    }
  }
  bVar2 = true;
LAB_01467e05:
  local_4 = 0xffffffff;
  if ((local_d4 & 1) != 0) {
    local_d4 = local_d4 & 0xfffffffe;
    if (0xf < local_b8[0]) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    local_b8[0] = 0xf;
    local_bc = 0;
    local_cc = (void *)((uint)local_cc & 0xffffff00);
  }
  if (!bVar2) {
    iVar5 = playerId_;
    pvVar7 = (void *)StateMachineState_getGame();
    pvVar7 = PlayArea_findPlayerElementById(pvVar7,iVar5);
    if (pvVar7 == (void *)0x0) {
      FUN_012f5a60("playerptr","..\\common\\common\\state\\PlayCardState.cpp",0x13c);
    }
    piVar8 = (int *)StateMachineState_getGame();
    cVar3 = (**(code **)(*piVar8 + 0x174))(pvVar7);
    if (cVar3 != '\0') {
      *(undefined1 *)((int)this + 0xf9) = 1;
      MessageText_ctor();
      puStack_8 = (undefined1 *)0x2;
      MessageText_ctor();
      puStack_8._0_1_ = 3;
      iVar5 = StateMachineState_getGame();
      set_pair_fields_4_8(&local_d4,0x28ba,*(uint *)(iVar5 + 0x20));
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_64,"no");
      puStack_8._0_1_ = 4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_b8,"yes");
      puStack_8._0_1_ = 5;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_80,"");
      puStack_8._0_1_ = 6;
      uVar6 = FUN_0145d850(auStack_2c,abStack_64);
      puStack_8._0_1_ = 7;
      uVar9 = FUN_0145d850(auStack_48,local_b8);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      (**(code **)(*(int *)this + 0x8c))(playerId_,abStack_80,&local_d4,uVar9,uVar6,auStack_9c);
      local_4._0_1_ = 7;
      FUN_0041f1d7();
      local_4._0_1_ = 6;
      FUN_0041f1d7();
      local_4._0_1_ = 5;
      FUN_0041f1d7();
      local_4._0_1_ = 4;
      FUN_0041f1d7();
      local_4._0_1_ = 3;
      FUN_0041f1d7();
      local_4 = CONCAT31(local_4._1_3_,2);
      MessageText_dtor();
      local_4 = 0xffffffff;
      MessageText_dtor();
      ExceptionList = local_c;
      return 2;
    }
    uVar4 = (**(code **)(*(int *)this + 0x7c))(playerId_);
    ExceptionList = local_c;
    return uVar4;
  }
  uVar4 = (**(code **)(*(int *)this + 0x7c))();
  ExceptionList = local_c;
  return uVar4;
}

