// addr: 0x0141bb50
// name: StateMachineState_setMessageText
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
StateMachineState_setMessageText
          (int param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
                    /* Copies a std::string into the state object field at offset 0x8c, used by
                       reveal and multi-action state message flows. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x8c),
             param_2,0,0xffffffff);
  return;
}

