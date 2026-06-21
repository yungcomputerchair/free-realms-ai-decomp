// addr: 0x01521110
// name: UserDataCommand_RespondPlayerHonors_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall UserDataCommand_RespondPlayerHonors_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for UserDataCommand_RespondPlayerHonors; installs vtable,
                       frees four owned vector/storage members, and runs base cleanup. */
  puStack_8 = &LAB_016b8874;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = UserDataCommand_RespondPlayerHonors::vftable;
  local_4 = 3;
  if ((void *)param_1[0x10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = 2;
  if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4 = 1;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 0;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 0xffffffff;
  UserDataCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

