// addr: 0x012c6ec0
// name: PropertyValue_setString
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
PropertyValue_setString
          (int param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
                    /* Sets a property/value object to type 3 and assigns its string payload.
                       Evidence: calls type setter with 3 then std::string assign to the payload
                       pointer. */
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8),
             param_2,0,0xffffffff);
  return;
}

