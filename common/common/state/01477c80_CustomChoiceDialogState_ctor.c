// addr: 0x01477c80
// name: CustomChoiceDialogState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CustomChoiceDialogState_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Default-constructs CustomChoiceDialogState, including several embedded
                       containers/strings, then assigns the state name and clears choice/dialog
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169faa2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = CustomChoiceDialogState::vftable;
  FUN_012fa910();
  local_4._0_1_ = 1;
  FUN_012fa910();
  local_4._0_1_ = 2;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,3);
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

