// addr: 0x013f64d0
// name: GameTurn_describeCurrentStateStack
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall GameTurn_describeCurrentStateStack(int param_1)

{
  void *pvVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 ***local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds/logs a textual description of the current state and state stack,
                       including current state-machine state, for Game_notifyCurrentStateMachine.
                       Evidence: strings 'State Stack:', 'State: %s', and 'CurrentStateMachineState:
                       %s'. */
  puStack_8 = &LAB_0168f740;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_40;
  ExceptionList = &local_c;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  local_4 = 0;
  FUN_013f5410(param_1 + 8);
  FUN_013f5a40((int *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar1 = Game_getCurrentTurn(*(void **)(param_1 + 4));
    pvVar1 = GameTurn_getCurrentStateMachine(pvVar1);
    pbVar2 = get_field_1c_address(*(void **)((int)pvVar1 + 0x18));
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ***)((uint)local_28[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar2,0,0xffffffff);
    local_4._0_1_ = 1;
    ppppuVar3 = (undefined4 ****)local_28[0];
    if (local_14 < 0x10) {
      ppppuVar3 = local_28;
    }
    Game_logGeneralFormatted(*(undefined4 *)(param_1 + 4),"CurrentStateMachineState: %s",ppppuVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ***)((uint)local_28[0] & 0xffffff00);
    if ((local_3c != (undefined4 *)0x0) && ((int)local_38 - (int)local_3c >> 2 != 0)) {
      local_38 = local_38 + -1;
    }
    Game_logGeneralFormatted(*(undefined4 *)(param_1 + 4),"State Stack:");
    local_30 = local_38;
    if (local_38 < local_3c) {
      FUN_00d83c2d();
    }
    puVar5 = local_3c;
    if (local_38 < local_3c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x40) {
        FUN_00d83c2d();
      }
      if (puVar5 == local_30) break;
      if (&stack0x00000000 == (undefined1 *)0x40) {
        FUN_00d83c2d();
      }
      if (local_38 <= puVar5) {
        FUN_00d83c2d();
      }
      pvVar1 = get_field_1c_address((void *)*puVar5);
      if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
        iVar4 = (int)pvVar1 + 4;
      }
      else {
        iVar4 = *(int *)((int)pvVar1 + 4);
      }
      Game_logGeneralFormatted(*(undefined4 *)(param_1 + 4),"State: %s",iVar4);
      if (local_38 <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
  }
  local_4 = 0xffffffff;
  if (local_3c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  ExceptionList = local_c;
  return;
}

