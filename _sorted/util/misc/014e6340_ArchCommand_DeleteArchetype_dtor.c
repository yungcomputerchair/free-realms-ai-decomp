// addr: 0x014e6340
// name: ArchCommand_DeleteArchetype_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ArchCommand_DeleteArchetype_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for ArchCommand_DeleteArchetype; installs/uses class
                       vtable and runs base cleanup. */
  puStack_8 = &LAB_016aff98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = ArchCommand_DeleteArchetype::vftable;
  local_4 = 0xffffffff;
  ArchCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

