// addr: 0x015043e0
// name: CommandObject_Move_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_Move_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Move by installing vtables, assigning the command
                       name, and initializing movement source/target/type fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = CommandObject_Move::vftable;
  param_1[2] = CommandObject_Move::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_Move",0x12);
  param_1[0x4b] = 0;
  param_1[0xc] = 0;
  param_1[0x19] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 2;
  param_1[0x4d] = 0;
  param_1[0x49] = 0;
  param_1[0x4e] = 0;
  ExceptionList = local_c;
  return param_1;
}

