// addr: 0x013cb800
// name: TcgClient_getGlobalStringByKey
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
TcgClient_getGlobalStringByKey
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          undefined4 param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily initializes global TCG client string maps with FUN_013cae70, then
                       returns a copy of the std::map<int,string> value for the requested key. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a599;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbdd84 == '\0') {
    TcgClient_initializeGlobalStringTables(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  }
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,pbVar1,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

