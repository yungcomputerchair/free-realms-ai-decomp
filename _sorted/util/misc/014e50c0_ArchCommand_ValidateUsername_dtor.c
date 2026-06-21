// addr: 0x014e50c0
// name: ArchCommand_ValidateUsername_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ArchCommand_ValidateUsername_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for ArchCommand_ValidateUsername; installs vtable, frees
                       username string storage, and runs base ArchCommand cleanup. */
  puStack_8 = &LAB_016afc13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = ArchCommand_ValidateUsername::vftable;
  local_4 = 0;
  if (0xf < (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_4 = 0xffffffff;
  ArchCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

