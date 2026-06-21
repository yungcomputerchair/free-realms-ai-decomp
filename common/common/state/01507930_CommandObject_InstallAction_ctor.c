// addr: 0x01507930
// name: CommandObject_InstallAction_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_InstallAction_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_InstallAction by installing vtables, clearing its
                       action field, and assigning the command name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_InstallAction::vftable;
  param_1[2] = CommandObject_InstallAction::vftable;
  param_1[0x49] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_InstallAction",0x1b);
  ExceptionList = local_c;
  return param_1;
}

