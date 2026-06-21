// addr: 0x013eb9d0
// name: CardGameFormat_getDescription
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
CardGameFormat_getDescription
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns a std::string description for known card-game format ids, describing
                       deck size/copy limits and Highlander/Common Ground/No Rares rules. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ea29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 < 0x1adb4) {
    if (param_2 == 0x1adb3) {
      uVar2 = 0x9c;
      pcVar1 = 
      "The Common Ground Format. You must have at least 40 cards in your draw deck (no more than 3 copies of any given card). Your cards must all be common rarity."
      ;
      goto LAB_013eba5b;
    }
    if (param_2 == 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (param_1,
                 "The Standard Format. You must have at least 40 cards in your draw deck and you may have no more than 3 copies of any given card."
                );
      ExceptionList = local_c;
      return param_1;
    }
    if (param_2 == 0x1adb2) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (param_1,
                 "The Highlander Format. You must have at least 40 cards in your draw deck and you may have no more than 1 copy of any given card."
                );
      ExceptionList = local_c;
      return param_1;
    }
  }
  else if (param_2 == 0x1adb5) {
    uVar2 = 0x8d;
    pcVar1 = 
    "The No Rares Format. You must have at least 40 cards in your draw deck (no more than 3 copies of any given card). You may not use rare cards."
    ;
    goto LAB_013eba5b;
  }
  uVar2 = 0;
  pcVar1 = "";
LAB_013eba5b:
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_1,pcVar1,uVar2)
  ;
  ExceptionList = local_c;
  return param_1;
}

