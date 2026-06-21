// addr: 0x0147f020
// name: ActionPlayedState_buttonPressedWithString
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0147f2ed) */

undefined4 __thiscall
ActionPlayedState_buttonPressedWithString(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  void *state;
  int playerId_;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_7c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [28];
  undefined1 local_44 [28];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* String-based button handler for ActionPlayedState: accepts only yes/no text
                       for button responses in state 0xe, maps them to the same flags as numeric
                       button presses, dispatches ButtonPressed, and advances. Evidence is yes/no
                       string comparisons and pairing with ActionPlayedState_buttonPressed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a07b8;
  local_c = ExceptionList;
  if (param_1[0x45] != 0xe) {
    return 2;
  }
  if (param_1[0x48] == 0) {
    return 2;
  }
  ExceptionList = &local_c;
  uVar6 = GamePlayer_getPlayerId(DAT_01b839d8 ^ (uint)&stack0xffffff6c);
  if (param_2 != uVar6) {
    ExceptionList = local_c;
    return 2;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,"yes");
  local_4 = 0;
  uVar7 = FUN_0145d850(local_28,local_60);
  local_4 = 1;
  bVar4 = false;
  bVar3 = false;
  cVar5 = FUN_012a2610(param_4,uVar7);
  if (cVar5 == '\0') {
LAB_0147f127:
    bVar2 = false;
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_7c,"no");
    local_4 = 2;
    uVar7 = FUN_0145d850(local_44,local_7c);
    local_4 = 3;
    bVar4 = true;
    bVar3 = true;
    cVar5 = FUN_012a2610(param_4,uVar7);
    bVar2 = true;
    if (cVar5 == '\0') goto LAB_0147f127;
  }
  local_4 = 2;
  if (bVar3) {
    FUN_0041f1d7();
  }
  local_4 = 1;
  if (bVar4) {
    FUN_0041f1d7();
  }
  local_4 = 0;
  FUN_0041f1d7();
  local_4 = 0xffffffff;
  FUN_0041f1d7();
  bVar4 = false;
  bVar3 = false;
  if (bVar2) {
    ExceptionList = local_c;
    return 2;
  }
  if (param_3 == 1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,"yes");
    local_4 = 4;
    uVar7 = FUN_0145d850(local_28,local_60);
    local_4 = 5;
    bVar4 = true;
    bVar3 = true;
    cVar5 = FUN_01237a70(param_4,uVar7);
    bVar2 = true;
    if (cVar5 == '\0') goto LAB_0147f217;
  }
  else {
LAB_0147f217:
    bVar2 = false;
  }
  local_4 = 4;
  if (bVar3) {
    FUN_0041f1d7();
  }
  local_4 = 0xffffffff;
  if (bVar4) {
    FUN_0041f1d7();
  }
  bVar3 = false;
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(undefined1 *)((int)param_1 + 0x125) = 1;
    goto LAB_0147f358;
  }
  if (param_3 == 2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,"no");
    local_4 = 6;
    uVar7 = FUN_0145d850(local_28,local_60);
    local_4 = 7;
    bVar3 = true;
    cVar5 = FUN_01237a70(param_4,uVar7);
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_0147f2d9;
  }
  else {
LAB_0147f2d9:
    bVar4 = false;
  }
  local_4 = 0xffffffff;
  if (bVar3) {
    FUN_0041f1d7();
  }
  if (bVar4) {
    piVar8 = (int *)StateMachineState_getCurrentTurn();
    playerId_ = param_1[0x3f];
    iVar1 = *piVar8;
    pvVar9 = (void *)StateMachineState_getGame();
    pvVar9 = PlayArea_findPlayerElementById(pvVar9,playerId_);
    (**(code **)(iVar1 + 0x48))(pvVar9);
    *(undefined1 *)(param_1 + 0x47) = 0;
  }
LAB_0147f358:
  pvVar9 = Mem_Alloc(0x30);
  local_4 = 8;
  if (pvVar9 == (void *)0x0) {
    pvVar9 = (void *)0x0;
  }
  else {
    state = (void *)StateMachineState_getGame();
    pvVar9 = GameCommand_ButtonPressed_ctor(pvVar9,state);
  }
  local_4 = 0xffffffff;
  set_field_4(pvVar9,param_2);
  StateCommand_setField24(pvVar9,param_3);
  StateMachineState_getGame(param_2,pvVar9);
  Game_dispatchCommandToPlayerOrAll(param_2,pvVar9);
  uVar7 = (**(code **)(*param_1 + 0x38))();
  ExceptionList = local_c;
  return uVar7;
}

