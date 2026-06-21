// addr: 0x015012f0
// name: CommandObject_ReadyCard_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_ReadyCard_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_ReadyCard, sets its vtable/name string, and
                       initializes its card command property/opcode field via the shared
                       ready/unready base constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b44c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014fc520(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_ReadyCard::vftable;
  param_1[2] = CommandObject_ReadyCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_ReadyCard",0x17);
  param_1[0x1f] = 0x18a;
  ExceptionList = local_c;
  return param_1;
}

