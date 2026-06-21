// addr: 0x012fa1f0
// name: DisplayActionBuilder_addCStringArg
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_addCStringArg(char * text) */

void __thiscall DisplayActionBuilder_addCStringArg(void *this,char *text)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_34 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs a std::string from a C string, wraps it as DisplayAction ValueData
                       type 3, and adds it through DisplayAction_addArgValueData. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016755a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  local_4 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = text;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,text,(int)pcVar2 - (int)(text + 1));
  local_4._0_1_ = 1;
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_28,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  DisplayAction_addArgValueData(this,local_34);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

