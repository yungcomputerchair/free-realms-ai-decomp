// addr: 0x0141ed60
// name: FUN_0141ed60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_0141ed60(undefined4 *param_1,undefined4 param_2,void *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Small helper/dispatcher using calls: FUN_01402400; FUN_01347a90;
                       FUN_0145c4d0; assign; assign; 00d82463. No class-identifying evidence is
                       present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169422a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(param_2);
  *param_1 = GetTargetState::vftable;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  local_4._1_3_ = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  local_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "GetTargetState",0xe);
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  ValueDataList_assign(param_1 + 0x3f,param_3);
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  iVar2 = MessageText_formatWithValueData(local_28);
  local_4._0_1_ = 3;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (*(int *)(iVar2 + 0x14) != 0) {
    param_1[0x16] = *(undefined4 *)(param_4 + 4);
    param_1[0x17] = *(undefined4 *)(param_4 + 8);
    MessageText_copyFrom(param_4 + 0xc);
    iVar2 = StateMachineState_getGame();
    Message_setVersion(param_1 + 0x15,*(int *)(iVar2 + 0x20));
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"cancel",6);
  local_4._0_1_ = 5;
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(local_28,local_44);
  local_4._0_1_ = 6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x23),
             pbVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  uVar1 = (uint)local_24 >> 8;
  local_24 = (void *)(uVar1 << 8);
  local_4._0_1_ = 3;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)(uVar1 << 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"0",1);
  local_4._0_1_ = 7;
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(local_44,local_28);
  local_4._0_1_ = 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2a),
             pbVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,7);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  StateMachineState_getGame();
  uVar4 = FUN_01347a90();
  param_1[0x49] = uVar4;
  param_1[0x4e] = 1;
  param_1[0x38] = 0;
  ExceptionList = local_c;
  return param_1;
}

