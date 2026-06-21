// addr: 0x013f66c0
// name: GameTurn_describeStateStack
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GameTurn_describeStateStack
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  void *pvVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_78 [4];
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined1 local_64 [4];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [4];
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
  
                    /* Builds/appends a textual description of the current GameTurn state machine,
                       including 'CurrentStateMachineState:' and a 'State Stack:' section with each
                       saved state name. Evidence is strings and GameTurn_getCurrentStateMachine
                       callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f7a0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_78;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,"",0);
  local_74 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
  local_6c = 0;
  local_4 = 0;
  FUN_013f5410(param_1 + 8);
  FUN_013f5a40((int *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar1 = Game_getCurrentTurn(*(void **)(param_1 + 4));
    pvVar1 = GameTurn_getCurrentStateMachine(pvVar1);
    pbVar2 = get_field_1c_address(*(void **)((int)pvVar1 + 0x18));
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar2,0,0xffffffff);
    local_4._0_1_ = 1;
    uVar3 = FUN_012326a0(local_64,"CurrentStateMachineState: ",local_2c);
    local_4._0_1_ = 2;
    uVar3 = FUN_01249400(local_48,uVar3,&DAT_01770548);
    local_4._0_1_ = 3;
    StdString_appendSubstring(uVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if ((local_74 != (undefined4 *)0x0) && ((int)local_70 - (int)local_74 >> 2 != 0)) {
      local_70 = local_70 + -1;
    }
    FUN_01241650("State Stack:\n",0xd);
    local_68 = local_70;
    if (local_70 < local_74) {
      FUN_00d83c2d();
    }
    puVar4 = local_74;
    if (local_70 < local_74) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x78) {
        FUN_00d83c2d();
      }
      if (puVar4 == local_68) break;
      if (&stack0x00000000 == (undefined1 *)0x78) {
        FUN_00d83c2d();
      }
      if (local_70 <= puVar4) {
        FUN_00d83c2d();
      }
      pvVar1 = get_field_1c_address((void *)*puVar4);
      uVar3 = FUN_012326a0(local_48,"State: ",pvVar1);
      local_4._0_1_ = 4;
      uVar3 = FUN_01249400(local_64,uVar3,&DAT_01770548);
      local_4._0_1_ = 5;
      StdString_appendSubstring(uVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      if (local_70 <= puVar4) {
        FUN_00d83c2d();
      }
      puVar4 = puVar4 + 1;
    }
  }
  local_4 = 0xffffffff;
  if (local_74 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  ExceptionList = local_c;
  return;
}

