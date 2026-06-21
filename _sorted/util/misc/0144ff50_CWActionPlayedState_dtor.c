// addr: 0x0144ff50
// name: CWActionPlayedState_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CWActionPlayedState_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for CWActionPlayedState; installs vtable and runs base
                       cleanup. */
  puStack_8 = &LAB_0169b5c8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = CWActionPlayedState::vftable;
  local_4 = 0xffffffff;
  local_10 = param_1;
  ActionPlayedState_dtor(uVar1);
  ExceptionList = local_c;
  return;
}

