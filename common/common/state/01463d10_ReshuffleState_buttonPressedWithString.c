// addr: 0x01463d10
// name: ReshuffleState_buttonPressedWithString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01464090) */
/* WARNING: Removing unreachable block (ram,0x01464282) */
/* WARNING: Removing unreachable block (ram,0x01464292) */
/* WARNING: Removing unreachable block (ram,0x0146429f) */

undefined4 __thiscall
ReshuffleState_buttonPressedWithString(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *state;
  int iVar7;
  undefined4 uVar8;
  char *fmt;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_7c [4];
  void *local_78;
  undefined4 local_68;
  uint local_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string
                       'ReshuffleState::buttonPressedWithString'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d9b0;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_c;
  fmt = "ReshuffleState::buttonPressedWithString";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,fmt,uVar4);
  if (param_2 != *(int *)(param_1 + 0xe0)) {
    ExceptionList = local_c;
    return 0;
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_60,"yes",3);
  local_4 = 0;
  iVar6 = FUN_0145d850(local_28,local_60);
  local_4 = 1;
  bVar3 = false;
  bVar2 = false;
  if (*(uint *)(iVar6 + 0x18) < 0x10) {
    iVar7 = iVar6 + 4;
  }
  else {
    iVar7 = *(int *)(iVar6 + 4);
  }
  iVar6 = FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar7,*(undefined4 *)(iVar6 + 0x14));
  if (iVar6 == 0) {
LAB_01463e61:
    bVar1 = true;
  }
  else {
    bVar3 = true;
    bVar2 = true;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_7c,"no",2);
    local_4 = 2;
    iVar6 = FUN_0145d850(local_44,local_7c);
    local_4 = 3;
    if (*(uint *)(iVar6 + 0x18) < 0x10) {
      iVar7 = iVar6 + 4;
    }
    else {
      iVar7 = *(int *)(iVar6 + 4);
    }
    iVar6 = FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar7,*(undefined4 *)(iVar6 + 0x14));
    bVar1 = false;
    if (iVar6 == 0) goto LAB_01463e61;
  }
  local_4 = 2;
  if (bVar2) {
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
  }
  local_4 = 1;
  if (bVar3) {
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
  }
  local_4 = 0;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_4 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  local_48 = 0xf;
  local_4c = 0;
  bVar3 = false;
  bVar2 = false;
  if (bVar1) {
    pvVar5 = Mem_Alloc(0x30);
    local_4 = 4;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      state = (void *)StateMachineState_getGame();
      pvVar5 = GameCommand_ButtonPressed_ctor(pvVar5,state);
    }
    local_4 = 0xffffffff;
    set_field_4(pvVar5,*(uint *)(param_1 + 0xe0));
    StateCommand_setField24(pvVar5,param_3);
    uVar8 = *(undefined4 *)(param_1 + 0xe0);
    StateMachineState_getGame(uVar8,pvVar5);
    Game_dispatchCommandToPlayerOrAll(uVar8,pvVar5);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_60,"yes",3);
  local_4 = 5;
  iVar6 = FUN_0145d850(local_28,local_60);
  local_4 = 6;
  if (*(uint *)(iVar6 + 0x18) < 0x10) {
    iVar7 = iVar6 + 4;
  }
  else {
    iVar7 = *(int *)(iVar6 + 4);
  }
  FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar7,*(undefined4 *)(iVar6 + 0x14));
  local_4 = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  local_48 = 0xf;
  local_4c = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_7c,"yes",3);
  local_4 = 7;
  iVar6 = FUN_0145d850(local_44,local_7c);
  local_4 = 8;
  if (*(uint *)(iVar6 + 0x18) < 0x10) {
    iVar7 = iVar6 + 4;
  }
  else {
    iVar7 = *(int *)(iVar6 + 4);
  }
  iVar6 = FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar7,*(undefined4 *)(iVar6 + 0x14));
  if (iVar6 != 0) {
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_60,"no",2);
    local_4 = 9;
    iVar6 = FUN_0145d850(local_28,local_60);
    local_4 = 10;
    bVar3 = true;
    bVar2 = true;
    if (*(uint *)(iVar6 + 0x18) < 0x10) {
      iVar7 = iVar6 + 4;
    }
    else {
      iVar7 = *(int *)(iVar6 + 4);
    }
    iVar6 = FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar7,*(undefined4 *)(iVar6 + 0x14));
    if (iVar6 != 0) {
      bVar1 = false;
      goto LAB_014641e4;
    }
  }
  bVar1 = true;
LAB_014641e4:
  local_4 = 9;
  if (bVar2) {
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
  }
  local_4 = 8;
  if (bVar3) {
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
  }
  local_4 = 0xffffffff;
  if (local_64 < 0x10) {
    if (!bVar1) {
      ExceptionList = local_c;
      return 0;
    }
    ExceptionList = local_c;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_78);
}

