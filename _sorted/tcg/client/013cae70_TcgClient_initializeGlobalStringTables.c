// addr: 0x013cae70
// name: TcgClient_initializeGlobalStringTables
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void TcgClient_initializeGlobalStringTables(void)

{
  void *element;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined4 local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes global string tables for pronouns and client states/status labels
                       using strings such as invalid/he/she/they,
                       Offline/Online/Away/MakingMatch/InMatch, and related prefixes. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a558;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_c;
  local_48 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"invalid",7);
  local_48 = 1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"he",2);
  local_48 = 2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"she",3);
  local_48 = 3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"it",2);
  local_48 = 5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"we",2);
  local_48 = 6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"they",4);
  local_48 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"invalid",7);
  local_48 = 1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"his",3);
  local_48 = 2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,(char *)&PTR_LAB_018dedd8,3);
  local_48 = 3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"its",3);
  local_48 = 5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,(char *)&PTR_DAT_018e08a4,3);
  local_48 = 6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"their",5);
  local_48 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"invalid",7);
  local_48 = 1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"him",3);
  local_48 = 2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,(char *)&PTR_LAB_018dedd8,3);
  local_48 = 3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"it",2);
  local_48 = 5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"us",2);
  local_48 = 6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           FUN_013ca7f0(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"them",4);
  local_48 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Invalid",7);
  local_48 = 1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Offline",7);
  local_48 = 2;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Online",6);
  local_48 = 3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Away",4);
  local_48 = 4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"MakingMatch",0xb);
  local_48 = 5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"InMatch",7);
  local_48 = 6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"InDeckBuilder",0xd);
  local_48 = 7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Trading",7);
  local_48 = 7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           TcgClient_getStatusStringSlot(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"In Collection Manager",0x15);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"il ",3);
  local_4 = 0;
  StdVector28_pushBack(&DAT_01cbdd94,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"i ",2);
  local_4 = 1;
  StdVector28_pushBack(&DAT_01cbdd94,local_28,element);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"la ",3);
  local_4 = 2;
  StdVector28_pushBack(&DAT_01cbdd94,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"le ",3);
  local_4 = 3;
  StdVector28_pushBack(&DAT_01cbdd94,local_28,element);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"l\' ",3);
  local_4 = 4;
  StdVector28_pushBack(&DAT_01cbdd94,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"un ",3);
  local_4 = 5;
  StdVector28_pushBack(&DAT_01cbdd94,local_28,element);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"a ",2);
  local_4 = 6;
  StdVector28_pushBack(&DAT_01cbdd94,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"an ",3);
  local_4 = 7;
  StdVector28_pushBack(&DAT_01cbdd94,local_28,element);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"the ",4);
  local_4 = 8;
  StdVector28_pushBack(&DAT_01cbdd94,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"una ",4);
  local_4 = 9;
  StdVector28_pushBack(&DAT_01cbdd94,local_28,element);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"el ",3);
  local_4 = 10;
  StdVector28_pushBack(&DAT_01cbdd94,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_48 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"Base",4);
  local_48 = 0x1b;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,(char *)&PTR_LAB_017ee650,3);
  local_48 = 0x29;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar1,"Start of Game",0xd);
  local_48 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"I",1);
  local_48 = 0x15fc3;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"C",1);
  local_48 = 0x15fc4;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"U",1);
  local_48 = 0x15fc5;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"R",1);
  local_48 = 0x15fc6;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"F",1);
  local_48 = 0x15fc7;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"P",1);
  local_48 = 0x15fc8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"S",1);
  local_48 = 0x15fc9;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"E",1);
  local_48 = 0x15fca;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"L",1);
  local_48 = 0x15fcb;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           StdMapIntString_subscriptOrInsert(&local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(pbVar1,"LP",2);
  DAT_01cbdd84 = 1;
  ExceptionList = local_c;
  return;
}

