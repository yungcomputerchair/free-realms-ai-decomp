// addr: 0x015204b0
// name: UserDataCommand_RespondPlayerInfo_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall UserDataCommand_RespondPlayerInfo_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for UserDataCommand_RespondPlayerInfo; installs vtable,
                       frees string/vector members, and runs UserDataCommand base cleanup. */
  puStack_8 = &LAB_016b864e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = UserDataCommand_RespondPlayerInfo::vftable;
  local_4 = 1;
  if (0xf < (uint)param_1[0x13]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe]);
  }
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_4 = 0;
  if ((void *)param_1[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 0xffffffff;
  UserDataCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

