// addr: 0x013c4a90
// name: TcgClient_sendPairStringEvent
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void TcgClient_sendPairStringEvent
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                *param_1,
               basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2
               )

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_d4 [4];
  undefined1 local_d0;
  undefined4 uStack_c8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_b8 [4];
  undefined1 local_b4;
  undefined4 uStack_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  uint uStack_9c;
  undefined1 local_88 [12];
  undefined1 local_7c [56];
  undefined1 local_44 [56];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds two temporary strings from inputs, prepares helper structures, and
                       forwards them through the 00f97dd0/00f94990 event or messaging path before
                       cleanup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016898d6;
  local_c = ExceptionList;
  uStack_9c = DAT_01b839d8 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_c;
  local_a0 = (undefined1 *)0xf;
  local_a4 = (undefined1 *)0x0;
  local_b4 = 0;
  uStack_c8 = 0x13c4ae5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_b8,param_2,0,0xffffffff);
  local_4 = 0;
  local_d0 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_d4,param_1,0,0xffffffff);
  local_4 = 0xffffffff;
  local_a0 = (undefined1 *)FUN_013c3c10(local_44);
  local_4 = 2;
  local_a4 = (undefined1 *)0x13c4b4b;
  FUN_013c3740();
  local_4._0_1_ = 3;
  local_a0 = local_7c;
  local_a4 = local_88;
  uStack_a8 = 0x13c4b65;
  FUN_00f97dd0();
  local_4 = CONCAT31(local_4._1_3_,2);
  local_a0 = (undefined1 *)0x13c4b75;
  FUN_00f94990();
  local_4 = 0xffffffff;
  local_a0 = (undefined1 *)0x13c4b89;
  FUN_012a2730();
  ExceptionList = local_c;
  return;
}

