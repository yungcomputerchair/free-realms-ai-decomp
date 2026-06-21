// addr: 0x014b6ab0
// name: LoginCommand_Results_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LoginCommand_Results_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LoginCommand_Results by running LoginCommand_ctor, installing its
                       vtable, and initializing result/status fields and strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a818e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LoginCommand_ctor(param_1);
  *param_1 = LoginCommand_Results::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  ExceptionList = local_c;
  return param_1;
}

