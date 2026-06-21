// addr: 0x0147cc40
// name: AlternateMultiActionState_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AlternateMultiActionState_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for AlternateMultiActionState; installs vtable, destroys
                       an owned member, and runs base cleanup. */
  puStack_8 = &LAB_016a03e6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = AlternateMultiActionState::vftable;
  local_4 = 0;
  MessageText_dtor(uVar1);
  local_4 = 0xffffffff;
  FUN_0146ab40();
  ExceptionList = local_c;
  return;
}

