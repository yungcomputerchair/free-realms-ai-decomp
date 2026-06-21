// addr: 0x0151b9e0
// name: UserDataCommand_RequestPlayerAvatars_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall UserDataCommand_RequestPlayerAvatars_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for UserDataCommand_RequestPlayerAvatars; installs class
                       vtable and runs UserDataCommand base cleanup. */
  puStack_8 = &LAB_016b7e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = UserDataCommand_RequestPlayerAvatars::vftable;
  local_4 = 0xffffffff;
  UserDataCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

