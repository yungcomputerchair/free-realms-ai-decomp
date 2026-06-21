// addr: 0x014b90f0
// name: LoginCommand_ForgotPasswordResults_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LoginCommand_ForgotPasswordResults_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LoginCommand_ForgotPasswordResults and initializes its small
                       result fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a88d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LoginCommand_ctor(param_1);
  *param_1 = LoginCommand_ForgotPasswordResults::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}

