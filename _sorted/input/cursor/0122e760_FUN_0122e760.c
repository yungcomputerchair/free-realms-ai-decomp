// addr: 0x0122e760
// name: FUN_0122e760
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0122e760(void)

{
  void *pvVar1;
  HCURSOR pHVar2;
  LPCSTR pCVar3;
  undefined4 local_64;
  HCURSOR local_60;
  undefined1 local_5c [12];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [4];
  void *local_4c;
  undefined4 local_3c;
  uint local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Unidentified helper; references strings
                       export:resources/cursors/cursor_sword_br.cur,
                       export:resources/cursors/cursor_sword_b.cur,
                       export:resources/cursors/cursor_sword_bl.cur,
                       export:resources/cursors/cursor_sword_r.cur,
                       export:resources/cursors/cursor_sword_l.cur. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016511e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_mtg.cur",0x27);
  local_c = 0;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 1;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  local_60 = LoadCursorFromFileA(pCVar3);
  local_c = (uint)local_c._1_3_ << 8;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 1;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_blocked.cur",0x2b);
  local_c = 2;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 3;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,2);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_powered.cur",0x2b);
  local_c = 4;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 5;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,4);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 2;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_sword.cur",0x29);
  local_c = 6;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 7;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,6);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 3;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_arrow.cur",0x29);
  local_c = 8;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 9;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,8);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 4;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_arrow_broken.cur",0x30);
  local_c = 10;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0xb;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,10);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 5;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_select.cur",0x2a);
  local_c = 0xc;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 0xd;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0xc);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 6;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_move.cur",0x28);
  local_c = 0xe;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0xf;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0xe);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 7;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_rotate.cur",0x2a);
  local_c = 0x10;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 0x11;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x10);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 8;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_scale.cur",0x29);
  local_c = 0x12;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x13;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x12);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 9;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_elevation.cur",0x2d);
  local_c = 0x14;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 0x15;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x14);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 10;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_sword_ul.cur",0x2c);
  local_c = 0x16;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x17;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x16);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0x12;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_sword_u.cur",0x2b);
  local_c = 0x18;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 0x19;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x18);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 0x11;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_34,"export:resources/cursors/cursor_sword_ur.cur",0x2c);
  local_c = 0x1a;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x1b;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x1a);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0x10;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_50,"export:resources/cursors/cursor_sword_l.cur",0x2b);
  local_c = 0x1c;
  pvVar1 = ResourcePath_buildFilePath(local_34,local_50);
  local_c._0_1_ = 0x1d;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x1c);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_64 = 0xb;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_34,"export:resources/cursors/cursor_sword_r.cur");
  local_c = 0x1e;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x1f;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x1e);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0xf;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_34,"export:resources/cursors/cursor_sword_bl.cur");
  local_c = 0x20;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x21;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x20);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0xc;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_34,"export:resources/cursors/cursor_sword_b.cur");
  local_c = 0x22;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x23;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x22);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0xd;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_34,"export:resources/cursors/cursor_sword_br.cur");
  local_c = 0x24;
  pvVar1 = ResourcePath_buildFilePath(local_50,local_34);
  local_c._0_1_ = 0x25;
  if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
    pCVar3 = (LPCSTR)((int)pvVar1 + 4);
  }
  else {
    pCVar3 = *(LPCSTR *)((int)pvVar1 + 4);
  }
  pHVar2 = LoadCursorFromFileA(pCVar3);
  local_c = CONCAT31(local_c._1_3_,0x24);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  local_c = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  local_64 = 0xe;
  local_60 = pHVar2;
  FUN_0122e6a0(local_5c,&local_64);
  ExceptionList = local_14;
  return;
}

