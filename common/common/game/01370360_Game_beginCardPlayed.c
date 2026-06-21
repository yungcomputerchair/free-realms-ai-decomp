// addr: 0x01370360
// name: Game_beginCardPlayed
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_beginCardPlayed(void * this, int playerID_, int cardID_, int
   playAreaID_, bool throwOnFailure_) */

bool __thiscall
Game_beginCardPlayed(void *this,int playerID_,int cardID_,int playAreaID_,bool throwOnFailure_)

{
  uint *puVar1;
  void *this_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  uint uStack_460;
  void *local_44c [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_444 [28];
  void *local_428;
  void *local_424;
  char local_41d;
  undefined1 *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  undefined4 local_410;
  undefined1 local_40c [4];
  char local_408;
  undefined4 local_3f8;
  undefined4 local_3f4;
  char local_3f0 [1000];
  uint local_8;
  
                    /* Invokes beginCardPlayed on the current state machine, logs/echoes the event,
                       and optionally throws an exception if the state rejects it. It reports player
                       and card ids in the thrown error. */
  puStack_414 = &LAB_01680b56;
  local_418 = ExceptionList;
  uStack_460 = DAT_01b839d8 ^ (uint)local_40c;
  local_41c = (undefined1 *)&uStack_460;
  ExceptionList = &local_418;
  local_424 = (void *)playAreaID_;
  local_41d = 0;
  local_410 = 0;
  local_428 = this;
  puVar1 = &uStack_460;
  local_8 = uStack_460;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xe41);
    puVar1 = (uint *)local_41c;
  }
  local_41c = (undefined1 *)puVar1;
  Game_writeGameLog(this,"beginCardPlayed\t%d\t%d",playerID_,cardID_);
  if (!throwOnFailure_) {
    Game_recordActionLogMessage(this,"beginCardPlayed\t%d\t%d",playerID_,cardID_);
  }
  this_00 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  uVar2 = StateMachine_beginCardPlayed(this_00,extraout_EDX);
  local_41d = (char)uVar2;
  if ((local_41d == '\0') && (throwOnFailure_)) {
    local_3f4 = 0xf;
    local_3f8 = 0;
    local_410._0_1_ = 1;
    puVar3 = local_40c;
    local_408 = local_41d;
    GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
    GameTurn_describeStateStack(puVar3);
    local_424 = Mem_Alloc(100);
    local_410._0_1_ = 2;
    if (local_424 == (void *)0x0) {
      local_44c[0] = (void *)0x0;
    }
    else {
      local_44c[0] = (void *)Exception_ctor();
    }
    local_410._0_1_ = 1;
    _sprintf(local_3f0,"beginCardPlayed returned false! playerid: %d, cardID: %d",playerID_);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_444,local_3f0);
    local_410._0_1_ = 3;
    Exception_setMessage(local_44c[0],local_444);
    local_410._0_1_ = 1;
    FUN_0041f1d7();
    Exception_setFunctionName(local_44c[0],local_40c);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_444,"Game.cpp");
    local_410._0_1_ = 4;
    Exception_setSourceFile(local_44c[0],local_444);
    local_410 = CONCAT31(local_410._1_3_,1);
    FUN_0041f1d7();
    Exception_setLineNumber(local_44c[0],0xe54);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_44c,&DAT_01aa602c);
  }
  ExceptionList = local_418;
  return (bool)local_41d;
}

