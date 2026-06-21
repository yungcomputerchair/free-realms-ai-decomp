// addr: 0x01519340
// name: TcgClient_getCardColorString
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
TcgClient_getCardColorString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a key in the lazily initialized card metadata string tables and
                       returns a copy. The initializer's adjacent group contains color strings Blue,
                       Yellow, Red, Green, and None; category assignment is inferred. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbeb44 == '\0') {
    TcgClient_initializeCardMetadataStringTables();
  }
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&stack0x00000008);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,pbVar1,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

