// addr: 0x01392710
// name: Card_formatCardTitleMarkup
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
Card_formatCardTitleMarkup
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_400;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a card title string as markup like <cardtitle
                       cardid="card|%d">%s</cardtitle> using the card id and title fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684042;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_400;
  ExceptionList = &local_c;
  local_400 = 0;
  local_3fc = param_2;
  _sprintf(local_3f8,"<cardtitle cardid=\"card|%d\">%s</cardtitle>",*(undefined4 *)(param_1 + 0x34))
  ;
  pcVar2 = local_3f8;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_2,local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  ExceptionList = local_c;
  return param_2;
}

