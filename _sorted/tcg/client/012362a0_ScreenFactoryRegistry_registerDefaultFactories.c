// addr: 0x012362a0
// name: ScreenFactoryRegistry_registerDefaultFactories
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void ScreenFactoryRegistry_registerDefaultFactories(void)

{
  void *pvVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined4 extraout_EAX_05;
  undefined4 extraout_EAX_06;
  undefined4 extraout_EAX_07;
  undefined4 extraout_EAX_08;
  undefined4 extraout_EAX_09;
  undefined4 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and registers default UI screen factories for Login, Menu, Lobby,
                       TradeLobby, Trade, Tournament, Game, Campaign, DeckBuilder,
                       CollectionManager, Matchmaking and related screens. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01652808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_LoginScreen_ctor(pvVar1);
    uVar2 = extraout_EAX;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::LoginScreen",0xf);
  local_4 = 0;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_MenuScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_00;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::MenuScreen",0xe);
  local_4 = 1;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_LobbyScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_01;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::LobbyScreen",0xf);
  local_4 = 2;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_TradeLobbyScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_02;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::TradeLobbyScreen",0x14);
  local_4 = 3;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_TradeScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_03;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::TradeScreen",0xf);
  local_4 = 4;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_TournamentScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_04;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::TournamentScreen",0x14);
  local_4 = 5;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_GameScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_05;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::GameScreen",0xe);
  local_4 = 6;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_DeckBuilderScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_06;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::DeckBuilderScreen",0x15);
  local_4 = 7;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_CollectionManagerScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_07;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::CollectionManagerScreen",0x1b);
  local_4 = 8;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_CampaignScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_08;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::CampaignScreen",0x12);
  local_4 = 9;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pvVar1 = Mem_Alloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    UI_ScreenFactory_MatchmakingScreen_ctor(pvVar1);
    uVar2 = extraout_EAX_09;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"UI::MatchmakingScreen",0x15);
  local_4 = 10;
  ScreenFactoryRegistry_registerFactory(local_28,uVar2,1);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}

