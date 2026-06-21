// addr: 0x014b9cb0
// name: LoginCommand_DisplayMOTD_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LoginCommand_DisplayMOTD_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LoginCommand_DisplayMOTD by running LoginCommand_ctor, installing
                       its vtable, and initializing two string fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8afe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LoginCommand_ctor(param_1);
  *param_1 = LoginCommand_DisplayMOTD::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  ExceptionList = local_c;
  return param_1;
}

