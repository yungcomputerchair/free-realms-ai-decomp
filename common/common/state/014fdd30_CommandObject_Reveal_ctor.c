// addr: 0x014fdd30
// name: CommandObject_Reveal_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_Reveal_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Reveal by installing vtables, assigning the command
                       name, clearing flags, and initializing its reveal target/id field to 0xff. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_Reveal::vftable;
  param_1[2] = CommandObject_Reveal::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_Reveal",0x14);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x47] = 0xff;
  ExceptionList = local_c;
  return param_1;
}

