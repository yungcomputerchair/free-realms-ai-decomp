// addr: 0x0136b570
// name: Game_recordActionLogMessage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Game_recordActionLogMessage(int param_1,char *param_2)

{
  void *this;
  char cVar1;
  uint value;
  void *element;
  char *pcVar2;
  char *pcVar3;
  __time64_t local_424;
  undefined1 local_41c [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a variadic message, timestamps it, keeps a bounded in-memory log
                       vector, and suppresses logging when the game is in a disabled state. Called
                       by Game_dragStopped, Game_cardPlayed, Game_beginCardPlayed, and other action
                       handlers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168033b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_424;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffbd0);
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x14d) != '\x01') {
    __vsnprintf(local_3f8,1000,param_2,&stack0x0000000c);
    pcVar2 = local_3f8;
    local_3fc = 0xf;
    local_400 = 0;
    local_410 = (void *)((uint)local_410 & 0xffffff00);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_414,local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
    local_4 = 0;
    __time64(&local_424);
    FUN_01241650(&DAT_018c2e18,2);
    pcVar3 = CRT_ctime64(&local_424);
    pcVar2 = pcVar3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
    this = (void *)(param_1 + 0x28c);
    if ((*(int *)(param_1 + 0x290) != 0) &&
       (4 < (uint)((*(int *)(param_1 + 0x294) - *(int *)(param_1 + 0x290)) / 0x1c))) {
      value = *(uint *)(param_1 + 0x290);
      if (*(uint *)(param_1 + 0x294) < value) {
        FUN_00d83c2d();
      }
      FixedRecordVector_insertRecord(this,local_41c,this,value,(int)element);
    }
    StdVector28_pushBack(this,local_414,element);
    local_4 = 0xffffffff;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
  }
  ExceptionList = local_c;
  return;
}

