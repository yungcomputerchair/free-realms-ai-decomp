// addr: 0x01446180
// name: LoginCommand_SendSessionID_dtor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall LoginCommand_SendSessionID_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-like cleanup for LoginCommand_SendSessionID: sets vftable, frees
                       multiple std::string fields, destroys an rb-tree member, then invokes base
                       cleanup. */
  puStack_8 = &LAB_016998d7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LoginCommand_SendSessionID::vftable;
  local_4 = 8;
  if (0xf < (uint)param_1[0x3c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x37]);
  }
  param_1[0x3c] = 0xf;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  local_4 = 7;
  if (0xf < (uint)param_1[0x35]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x30]);
  }
  param_1[0x35] = 0xf;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_4 = 6;
  if (0xf < (uint)param_1[0x2e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x29]);
  }
  param_1[0x2e] = 0xf;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_4 = 5;
  if (0xf < (uint)param_1[0x27]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x22]);
  }
  param_1[0x27] = 0xf;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  local_4 = 4;
  if (0xf < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1b]);
  }
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  local_4 = 3;
  if (0xf < (uint)param_1[0x18]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13]);
  }
  param_1[0x18] = 0xf;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  local_4 = 2;
  if (0xf < (uint)param_1[0x11]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_4 = 1;
  LoginCommand_RbTree_destroy(param_1 + 8);
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  LoginCommand_dtor(param_1);
  ExceptionList = puStack_8;
  return;
}

