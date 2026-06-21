// addr: 0x014dee50
// name: GameCommand_DiscardCard_setupParentCardName
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
GameCommand_DiscardCard_setupParentCardName
          (int param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
                    /* Copies a parent-card name string into GameCommand_DiscardCard at this+0x30
                       and logs it with the format 'GameCommand_DiscardCard::setupParentCardName
                       %s'. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30),
             param_2,0,0xffffffff);
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    param_2 = param_2 + 4;
  }
  else {
    param_2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               (param_2 + 4);
  }
  Game_logGeneral(*(void **)(param_1 + 8),"GameCommand_DiscardCard::setupParentCardName %s",param_2)
  ;
  return;
}

