// addr: 0x014e59c0
// name: ArchCommand_SetEnabledArchetypes_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ArchCommand_SetEnabledArchetypes_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for ArchCommand_SetEnabledArchetypes; installs vtable,
                       frees owned vector/storage, and runs base cleanup. */
  puStack_8 = &LAB_016afd93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = ArchCommand_SetEnabledArchetypes::vftable;
  local_4 = 0;
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0xffffffff;
  ArchCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

