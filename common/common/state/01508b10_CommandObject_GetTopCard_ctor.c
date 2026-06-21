// addr: 0x01508b10
// name: CommandObject_GetTopCard_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_GetTopCard_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_GetTopCard by installing vtables, assigning the
                       command name, and clearing its flag byte. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_GetTopCard::vftable;
  param_1[2] = CommandObject_GetTopCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_GetTopCard",0x18);
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  ExceptionList = local_c;
  return param_1;
}

