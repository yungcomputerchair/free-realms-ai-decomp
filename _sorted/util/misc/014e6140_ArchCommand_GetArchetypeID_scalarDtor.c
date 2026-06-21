// addr: 0x014e6140
// name: ArchCommand_GetArchetypeID_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ArchCommand_GetArchetypeID_scalarDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for ArchCommand_GetArchetypeID; installs/uses
                       class vtable and runs base cleanup and frees this when requested. */
  puStack_8 = &LAB_016aff38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = ArchCommand_GetArchetypeID::vftable;
  local_4 = 0xffffffff;
  ArchCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

