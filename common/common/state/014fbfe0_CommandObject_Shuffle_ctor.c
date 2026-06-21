// addr: 0x014fbfe0
// name: CommandObject_Shuffle_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_Shuffle_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Shuffle by installing vtables, assigning its command
                       name, clearing flags, and zeroing target fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b37b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = CommandObject_Shuffle::vftable;
  param_1[2] = CommandObject_Shuffle::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_Shuffle",0x15);
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  ExceptionList = local_c;
  return param_1;
}

