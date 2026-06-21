// addr: 0x01472f60
// name: DoublePassState_buttonPressedWithString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DoublePassState_buttonPressedWithString(void * this, int playerId_, int
   button_, void * buttonText) */

int __thiscall
DoublePassState_buttonPressedWithString(void *this,int playerId_,int button_,void *buttonText)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *unaff_ESI;
  char *pcVar9;
  uint local_b4;
  void *local_b0;
  void *pvStack_ac;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  void *local_94;
  void *pvStack_90;
  undefined4 local_84;
  uint local_80;
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
  int local_4;
  
                    /* Handles DoublePass button press with text; recognizes pass text in state 3
                       and otherwise logs wrong-state/fallback behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f40a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar3 = false;
  bVar2 = false;
  if (*(uint *)((int)buttonText + 0x18) < 0x10) {
    iVar5 = (int)buttonText + 4;
  }
  else {
    iVar5 = *(int *)((int)buttonText + 4);
  }
  pcVar9 = "DOUBLEPASS::BUTTONPRESSEDWITHSTRING player: %d, button: %d, buttonText: %s";
  iVar6 = playerId_;
  pvVar4 = (void *)StateMachineState_getGame
                             ("DOUBLEPASS::BUTTONPRESSEDWITHSTRING player: %d, button: %d, buttonText: %s"
                              ,playerId_,button_,iVar5,DAT_01b839d8 ^ (uint)&stack0xffffff34);
  Game_logGeneral(pvVar4,pcVar9,iVar6);
  if (*(int *)((int)this + 0x128) != 3) {
    pcVar9 = "Player buttonPressedWithString in wrong state! playerid: %d";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar9,playerId_);
    goto LAB_01472fed;
  }
  if (button_ == 1) {
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = (void *)((uint)local_b0 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b4,"pass",4
              );
    local_4 = 0;
    iVar5 = FUN_0145d850(&local_98,&local_b4);
    local_4 = button_;
    bVar3 = true;
    bVar2 = true;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar6 = iVar5 + 4;
    }
    else {
      iVar6 = *(int *)(iVar5 + 4);
    }
    iVar5 = FUN_00f942a0(0,*(undefined4 *)((int)buttonText + 0x14),iVar6,
                         *(undefined4 *)(iVar5 + 0x14));
    if (iVar5 != 0) goto LAB_014730a0;
    bVar1 = true;
  }
  else {
LAB_014730a0:
    bVar1 = false;
  }
  local_4 = 0;
  if (bVar2) {
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94 = (void *)((uint)local_94 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  if (bVar3) {
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_b0);
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = (void *)((uint)local_b0 & 0xffffff00);
  }
  if (bVar1) {
    MessageText_ctor();
    local_4 = 2;
    local_80 = 0xf;
    local_84 = 0;
    local_94 = (void *)((uint)local_94 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,"0",1);
    local_4._0_1_ = 3;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_7c,"0",1);
    local_4._0_1_ = 4;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = (void *)((uint)local_b0 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b4,"",0);
    local_4._0_1_ = 5;
    uVar7 = FUN_0145d850(local_60,&local_98);
    local_4._0_1_ = 6;
    uVar8 = FUN_0145d850(local_44,&local_7c);
    local_4 = CONCAT31(local_4._1_3_,7);
    (**(code **)(*(int *)this + 0x8c))(playerId_,&local_b4,local_28,uVar8,uVar7,local_28);
    uStack_1c = 6;
    if (0xf < local_44[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_58);
    }
    local_44[0] = 0xf;
    uStack_48 = 0;
    pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
    uStack_1c = 5;
    if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_74);
    }
    local_60[0] = 0xf;
    local_64 = 0;
    pvStack_74 = (void *)((uint)pvStack_74 & 0xffffff00);
    uStack_1c = 4;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
    local_b4 = 0xf;
    uStack_1c = 3;
    if (local_7c < 0x10) {
      local_7c = 0xf;
      local_80 = 0;
      pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
      uStack_1c = 2;
      if (local_98 < 0x10) {
        local_98 = 0xf;
        local_9c = 0;
        pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
        iVar5 = (**(code **)(*(int *)this + 0x80))(uStack_14);
        local_4 = 0xffffffff;
        MessageText_dtor();
        ExceptionList = local_c;
        return iVar5;
      }
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_90);
  }
LAB_01472fed:
  (**(code **)(*(int *)this + 0x88))();
  ExceptionList = local_c;
  return 0;
}

