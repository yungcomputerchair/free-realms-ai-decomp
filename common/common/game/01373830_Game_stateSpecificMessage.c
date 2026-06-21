// addr: 0x01373830
// name: Game_stateSpecificMessage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_stateSpecificMessage(void * this, int messageId_, char *
   clientCommand, char * gameCommand, bool throwOnUnhandled_) */

bool __thiscall
Game_stateSpecificMessage
          (void *this,int messageId_,char *clientCommand,char *gameCommand,bool throwOnUnhandled_)

{
  int iVar1;
  char *this_00;
  uint *puVar2;
  char cVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  undefined4 ***pppuVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 ***pppuVar8;
  void *this_01;
  char in_stack_0000001c;
  undefined1 *puVar9;
  uint uStack_500;
  undefined1 local_4f0 [28];
  undefined1 local_4d4 [28];
  int local_4b8 [3];
  undefined1 local_4ac [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_49c [12];
  undefined1 local_490 [8];
  int local_488 [2];
  int local_480;
  char *local_47c;
  char *local_478;
  void *local_474 [2];
  void *local_46c;
  int local_468;
  char *local_464;
  int local_460;
  char *local_45c;
  char local_455;
  undefined1 *local_454;
  void *local_450;
  undefined1 *puStack_44c;
  int local_448;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_444 [4];
  undefined4 **local_440 [4];
  undefined4 local_430;
  uint local_42c;
  undefined1 local_428 [4];
  undefined1 local_424;
  undefined4 local_414;
  undefined4 local_410;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40c [4];
  undefined4 **local_408 [4];
  undefined4 local_3f8;
  uint local_3f4;
  uint local_8;
  
                    /* Sends a stateSpecificMessage to the current game state machine, records its
                       timestamp, and optionally dumps client/game commands and throws if no state
                       handles it. Evidence is Game.cpp, the literal 'stateSpecificMessage %d %s
                       %s', and calls to GameTurn_getCurrentStateMachine. */
  this_00 = gameCommand;
  puStack_44c = &LAB_016811aa;
  local_450 = ExceptionList;
  uStack_500 = DAT_01b839d8 ^ (uint)local_444;
  local_454 = (undefined1 *)&uStack_500;
  ExceptionList = &local_450;
  local_464 = clientCommand;
  local_45c = gameCommand;
  this_01 = (void *)0x0;
  local_455 = 0;
  local_3f4 = 0xf;
  local_3f8 = 0;
  local_408[0] = (undefined4 **)((uint)local_408[0] & 0xffffff00);
  local_42c = 0xf;
  local_430 = 0;
  local_440[0] = (undefined4 **)((uint)local_440[0] & 0xffffff00);
  local_448._1_3_ = 0;
  local_448._0_1_ = 2;
  local_46c = this;
  puVar2 = &uStack_500;
  local_8 = uStack_500;
  if (clientCommand != (char *)0x0) {
    pbVar4 = ValueData_toString(clientCommand,local_428);
    local_448._0_1_ = 3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_40c,pbVar4,0,0xffffffff);
    local_448._0_1_ = 2;
    FUN_0041f1d7();
    puVar2 = (uint *)local_454;
  }
  local_454 = (undefined1 *)puVar2;
  if (this_00 != (char *)0x0) {
    pbVar4 = ValueData_toString(this_00,local_428);
    local_448._0_1_ = 4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_444,pbVar4,0,0xffffffff);
    local_448._0_1_ = 2;
    FUN_0041f1d7();
  }
  iVar1 = messageId_;
  pppuVar8 = (undefined4 ***)local_440[0];
  if (local_42c < 0x10) {
    pppuVar8 = local_440;
  }
  pppuVar5 = (undefined4 ***)local_408[0];
  if (local_3f4 < 0x10) {
    pppuVar5 = local_408;
  }
  Game_writeGameLog(this,"stateSpecificMessage\t%d\t%s\t%s",messageId_,pppuVar5,pppuVar8);
  TimeStamp_setCurrentFtime(local_4b8);
  piVar6 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&messageId_);
  *piVar6 = local_4b8[0];
  local_480 = iVar1;
  local_47c = local_464;
  local_478 = local_45c;
  piVar6 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  local_455 = (**(code **)(*piVar6 + 0x38))(0xd,&local_480);
  if ((local_455 == '\0') && (in_stack_0000001c == '\x01')) {
    local_410 = 0xf;
    local_414 = 0;
    local_424 = 0;
    local_448._0_1_ = 5;
    puVar9 = local_428;
    GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
    GameTurn_describeStateStack(puVar9);
    FUN_01241fc0("\n# clientCommands:\n");
    FUN_01365190(local_4ac);
    local_448 = CONCAT31(local_448._1_3_,6);
    local_460 = 0;
    local_468 = 0;
    piVar6 = StdStringVector_makeEndIterator(local_4ac,local_488);
    local_468 = *piVar6;
    local_464 = (char *)piVar6[1];
    piVar6 = StdStringVector_makeBeginIterator(local_4ac,local_488);
    local_460 = *piVar6;
    local_45c = (char *)piVar6[1];
    while( true ) {
      cVar3 = FUN_01249260(&local_468);
      if (cVar3 == '\0') break;
      uVar7 = FUN_01249200();
      uVar7 = FUN_012326a0(local_4f0,&DAT_018d65dc,uVar7);
      local_448._0_1_ = 7;
      uVar7 = FUN_01249400(local_4d4,uVar7,&DAT_01770548);
      local_448._0_1_ = 8;
      StdString_appendSubstring(uVar7,0,0xffffffff);
      local_448._0_1_ = 7;
      FUN_0041f1d7();
      local_448 = CONCAT31(local_448._1_3_,6);
      FUN_0041f1d7();
      FUN_012f09c0(local_488,0);
    }
    FUN_01241fc0("# gameCommands:\n");
    uVar7 = FUN_01365200(local_490);
    local_448._0_1_ = 9;
    StdVector28_assign(uVar7);
    local_448 = CONCAT31(local_448._1_3_,6);
    StdVector_StdStringRange_clear(local_490);
    piVar6 = StdStringVector_makeEndIterator(local_4ac,local_488);
    local_468 = *piVar6;
    local_464 = (char *)piVar6[1];
    piVar6 = StdStringVector_makeBeginIterator(local_4ac,local_488);
    local_460 = *piVar6;
    local_45c = (char *)piVar6[1];
    while( true ) {
      cVar3 = FUN_01249260(&local_468);
      if (cVar3 == '\0') break;
      uVar7 = FUN_01249200();
      uVar7 = FUN_012326a0(local_4d4,&DAT_018d65dc,uVar7);
      local_448._0_1_ = 10;
      uVar7 = FUN_01249400(local_4f0,uVar7,&DAT_01770548);
      local_448._0_1_ = 0xb;
      StdString_appendSubstring(uVar7,0,0xffffffff);
      local_448._0_1_ = 10;
      FUN_0041f1d7();
      local_448 = CONCAT31(local_448._1_3_,6);
      FUN_0041f1d7();
      FUN_012f09c0(local_488,0);
    }
    local_45c = Mem_Alloc(100);
    local_448._0_1_ = 0xc;
    if (local_45c != (void *)0x0) {
      this_01 = (void *)Exception_ctor();
    }
    local_448._0_1_ = 6;
    Exception_setFunctionName(this_01,local_428);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_49c,"Game.cpp");
    local_448._0_1_ = 0xd;
    Exception_setSourceFile(this_01,local_49c);
    local_448 = CONCAT31(local_448._1_3_,6);
    FUN_0041f1d7();
    Exception_setLineNumber(this_01,0x16ee);
    local_474[0] = this_01;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_474,&DAT_01aa602c);
  }
  local_448._0_1_ = 1;
  FUN_0041f1d7();
  local_448 = (uint)local_448._1_3_ << 8;
  FUN_0041f1d7();
  ExceptionList = local_450;
  return (bool)local_455;
}

