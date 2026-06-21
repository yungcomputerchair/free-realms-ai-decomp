// addr: 0x015194f0
// name: TcgClient_getCardTraitString
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
TcgClient_getCardTraitString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a TCG card trait/classification string and returns a copy. The
                       initializer includes many trait/class strings such as Alchemist, Animal,
                       Archer, Brawler, Wizard, and Yeti; caller 01452bb0 formats a single integer
                       through this wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7909;
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

