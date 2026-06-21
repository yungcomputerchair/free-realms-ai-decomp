// addr: 0x01506550
// name: CommandObject_IntroduceCard_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_IntroduceCard_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_IntroduceCard by installing vtables, assigning the
                       command name, and clearing its flag byte. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_IntroduceCard::vftable;
  param_1[2] = CommandObject_IntroduceCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_IntroduceCard",0x1b);
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  ExceptionList = local_c;
  return param_1;
}

