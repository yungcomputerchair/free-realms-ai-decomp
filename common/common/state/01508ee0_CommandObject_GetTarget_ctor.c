// addr: 0x01508ee0
// name: CommandObject_GetTarget_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_GetTarget_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_GetTarget by installing vtables, assigning the
                       command name, and clearing target/flag bytes. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b55c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_GetTarget::vftable;
  param_1[2] = CommandObject_GetTarget::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_GetTarget",0x17);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  ExceptionList = local_c;
  return param_1;
}

