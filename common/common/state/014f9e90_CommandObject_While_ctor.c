// addr: 0x014f9e90
// name: CommandObject_While_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_While_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_While by calling the CommandObject base ctor,
                       installing vtables, setting the command name, and clearing flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b31e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = CommandObject_While::vftable;
  param_1[2] = CommandObject_While::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_While",0x13);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  ExceptionList = local_c;
  return param_1;
}

