// addr: 0x014b8170
// name: LoginCommand_RegisterUsernameResults_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LoginCommand_RegisterUsernameResults_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LoginCommand_RegisterUsernameResults, initializing base
                       LoginCommand fields and result fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LoginCommand_ctor(param_1);
  *param_1 = LoginCommand_RegisterUsernameResults::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}

