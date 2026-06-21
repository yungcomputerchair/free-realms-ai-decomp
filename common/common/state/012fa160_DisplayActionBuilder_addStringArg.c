// addr: 0x012fa160
// name: DisplayActionBuilder_addStringArg
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_addStringArg(void * str) */

void __thiscall DisplayActionBuilder_addStringArg(void *this,void *str)

{
  undefined1 local_18 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DisplayAction ValueData argument with type code 3 from an existing
                       std::string and adds it via DisplayAction_addArgValueData. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_10,str,0,0xffffffff);
  DisplayAction_addArgValueData(this,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

