// addr: 0x015032c0
// name: CommandObject_MultiPlayer_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_MultiPlayer_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_MultiPlayer by installing vtables, assigning the
                       command name, and clearing two flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b49f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_MultiPlayer::vftable;
  param_1[2] = CommandObject_MultiPlayer::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_MultiPlayer",0x19);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  ExceptionList = local_c;
  return param_1;
}

