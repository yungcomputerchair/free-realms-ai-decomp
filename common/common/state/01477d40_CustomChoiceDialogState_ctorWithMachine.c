// addr: 0x01477d40
// name: CustomChoiceDialogState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CustomChoiceDialogState_ctorWithMachine(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CustomChoiceDialogState with a state machine/context pointer,
                       initializes embedded members, stores the context, and sets the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169faf2;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(param_2);
  local_4 = 0;
  *param_1 = CustomChoiceDialogState::vftable;
  FUN_012fa910(uVar1);
  local_4._0_1_ = 1;
  FUN_012fa910();
  local_4._0_1_ = 2;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[2] = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "CustomChoiceDialogState",0x17);
  param_1[0x3a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)((int)param_1 + 0x129) = 0;
  ExceptionList = local_c;
  return param_1;
}

