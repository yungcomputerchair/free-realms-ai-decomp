// addr: 0x013c15d0
// name: LoginCommand_RegisterUsername_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LoginCommand_RegisterUsername_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LoginCommand_RegisterUsername by running LoginCommand_ctor,
                       installing its vtable, and initializing username/password-related
                       strings/flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168933e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LoginCommand_ctor(param_1);
  *param_1 = LoginCommand_RegisterUsername::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  ExceptionList = local_c;
  return param_1;
}

