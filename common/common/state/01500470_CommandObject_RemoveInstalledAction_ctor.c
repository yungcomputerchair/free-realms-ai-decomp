// addr: 0x01500470
// name: CommandObject_RemoveInstalledAction_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_RemoveInstalledAction_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_RemoveInstalledAction by installing vtables,
                       clearing its action field, and assigning the command name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_RemoveInstalledAction::vftable;
  param_1[2] = CommandObject_RemoveInstalledAction::vftable;
  param_1[0x49] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_RemoveInstalledAction",0x23);
  ExceptionList = local_c;
  return param_1;
}

