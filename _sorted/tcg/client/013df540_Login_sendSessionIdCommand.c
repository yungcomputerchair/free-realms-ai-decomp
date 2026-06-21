// addr: 0x013df540
// name: Login_sendSessionIdCommand
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Login_sendSessionIdCommand(void *param_1)

{
  void *handle;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_120 [4];
  void *local_11c;
  undefined4 local_10c;
  uint local_108;
  undefined1 local_104 [104];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9c [140];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs LoginCommand_SendSessionID, fills record/session fields, sets
                       game-screen flag, assigns command code 'CW', sends through
                       DisplayActionManager singleton, releases handle, and destroys the command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168cf06;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_120;
  ExceptionList = &local_c;
  LoginCommand_SendSessionID_ctor(local_104);
  local_4 = 0;
  TcgRecord_setField04C(local_104,param_1);
  GameScreen_setFlag64(local_104,true);
  local_108 = 0xf;
  local_10c = 0;
  local_11c = (void *)((uint)local_11c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_120,"CW",2);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_9c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_120,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(local_11c);
  }
  local_108 = 0xf;
  local_10c = 0;
  local_11c = (void *)((uint)local_11c & 0xffffff00);
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  local_4 = 0xffffffff;
  LoginCommand_SendSessionID_dtor();
  ExceptionList = local_c;
  return;
}

