// addr: 0x0141bfa0
// name: GetTargetState_ctor
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GetTargetState_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 uVar3;
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
  
                    /* Constructs a GetTargetState with the CancellableStateMachineState base,
                       installs the GetTargetState vtable, initializes fields, and sets default
                       label/cancel text. Evidence is GetTargetState vtable and string literals
                       GetTargetState/cancel. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693cb2;
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
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"cancel",6);
  local_4._0_1_ = 4;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(local_28,local_44);
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x23),
             pbVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
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
  local_4._0_1_ = 6;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_0145d850(local_44,local_28);
  local_4._0_1_ = 7;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2a),
             pbVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,6);
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
  uVar3 = FUN_01347a90();
  param_1[0x49] = uVar3;
  param_1[0x4e] = 1;
  ExceptionList = local_c;
  return param_1;
}

