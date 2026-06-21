// addr: 0x014b5b10
// name: LoginCommand_SendChallenge_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LoginCommand_SendChallenge_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LoginCommand_SendChallenge by running LoginCommand_ctor,
                       installing its vtable, initializing two strings, and setting a boolean flag
                       true. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7f8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LoginCommand_ctor(param_1);
  *param_1 = LoginCommand_SendChallenge::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  ExceptionList = local_c;
  return param_1;
}

