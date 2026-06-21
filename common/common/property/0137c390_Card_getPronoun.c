// addr: 0x0137c390
// name: Card_getPronoun
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
Card_getPronoun(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2
               )

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *extraout_EAX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *extraout_EAX_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *extraout_EAX_01;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *extraout_EAX_02;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds and returns the localized pronoun string for pronoun types 1, 2, and
                       3, asserting on any other value. The assert text explicitly names
                       Card::getPronoun and the body selects one of three string resources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01681dc1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  local_4 = 1;
  if (param_2 == 1) {
    CardPronounTable_getMasculine();
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,extraout_EAX_02,0,0xffffffff);
  }
  else {
    if (param_2 == 2) {
      CardPronounTable_getFeminine();
      pbVar1 = extraout_EAX_01;
    }
    else {
      if (param_2 != 3) {
        FUN_012f5a60("!\"Unhandled pronoun type: %d in Card::getPronoun()\"",
                     "..\\common\\common\\property\\Archetype.cpp",0x4a8);
        CardPronounTable_getMasculine();
        *(undefined4 *)(param_1 + 0x18) = 0xf;
        *(undefined4 *)(param_1 + 0x14) = 0;
        param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_1,extraout_EAX,0,0xffffffff);
        goto LAB_0137c46d;
      }
      CardPronounTable_getNeutral();
      pbVar1 = extraout_EAX_00;
    }
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,pbVar1,0,0xffffffff);
  }
LAB_0137c46d:
  local_4 = local_4 & 0xffffff00;
  FUN_01300cd0();
  ExceptionList = local_c;
  return param_1;
}

