// addr: 0x0137cc20
// name: FUN_0137cc20
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_0137cc20(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a std::string label for enum values 1..9 using static string constants
                       and returns a default label for unknown values. The string contents are not
                       visible in ctx, so left unnamed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01681ec9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  switch(param_2) {
  case 1:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd254);
    break;
  case 2:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd240);
    break;
  case 3:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd22c);
    break;
  case 4:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd218);
    break;
  case 5:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd204);
    break;
  case 6:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd1f0);
    break;
  case 7:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd1dc);
    break;
  case 8:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd1c8);
    break;
  case 9:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,&DAT_018dd1b4);
    break;
  default:
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,&DAT_018dd1a0,0x12);
  }
  ExceptionList = local_c;
  return param_1;
}

