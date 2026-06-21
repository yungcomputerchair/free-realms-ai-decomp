// addr: 0x0136fcf0
// name: Game_cardPlayed
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_cardPlayed(void * this, int playerID_, int cardID_, bool
   throwOnFailure_, bool fromReplay_) */

bool __thiscall
Game_cardPlayed(void *this,int playerID_,int cardID_,bool throwOnFailure_,bool fromReplay_)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  void *this_00;
  undefined1 *puVar5;
  uint uStack_470;
  int local_460 [4];
  int local_450;
  int local_44c;
  void *local_448;
  void *local_444;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_440 [28];
  void *local_424;
  char local_41d;
  undefined1 *local_41c;
  void *local_418;
  undefined1 *puStack_414;
  undefined4 local_410;
  undefined1 local_40c [4];
  undefined1 local_408;
  undefined4 local_3f8;
  undefined4 local_3f4;
  char local_3f0 [1000];
  uint local_8;
  
                    /* Logs and dispatches cardPlayed event id 1 to the current state machine,
                       stores replay flag, and optionally throws if rejected. Calls a post-dispatch
                       virtual callback afterward. */
  puStack_414 = &LAB_01680a96;
  local_418 = ExceptionList;
  uStack_470 = DAT_01b839d8 ^ (uint)local_40c;
  local_41c = (undefined1 *)&uStack_470;
  ExceptionList = &local_418;
  local_41d = 0;
  local_410 = 0;
  local_424 = this;
  puVar3 = &uStack_470;
  local_8 = uStack_470;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xdb6);
    puVar3 = (uint *)local_41c;
  }
  local_41c = (undefined1 *)puVar3;
  iVar2 = cardID_;
  iVar1 = playerID_;
  Game_writeGameLog(this,"cardPlayed\t%d\t%d",playerID_,cardID_);
  if (throwOnFailure_ == false) {
    Game_recordActionLogMessage(this,"cardPlayed\t%d\t%d",iVar1,iVar2);
  }
  TimeStamp_setCurrentFtime(local_460);
  piVar4 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
  *piVar4 = local_460[0];
  *(bool *)((int)this + 0x2a9) = fromReplay_;
  local_450 = iVar1;
  local_44c = iVar2;
  piVar4 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  local_41d = (**(code **)(*piVar4 + 0x38))(1,&local_450);
  if ((local_41d == '\0') && (throwOnFailure_ == true)) {
    local_3f4 = 0xf;
    this_00 = (void *)0x0;
    local_3f8 = 0;
    local_408 = 0;
    local_410._0_1_ = 1;
    puVar5 = local_40c;
    GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
    GameTurn_describeStateStack(puVar5);
    local_444 = Mem_Alloc(100);
    local_410._0_1_ = 2;
    if (local_444 != (void *)0x0) {
      this_00 = (void *)Exception_ctor();
    }
    local_410._0_1_ = 1;
    _sprintf(local_3f0,"cardPlayed returned false! playerid: %d, cardID: %d, matchID: %d",playerID_)
    ;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_440,local_3f0);
    local_410._0_1_ = 3;
    Exception_setMessage(this_00,local_440);
    local_410._0_1_ = 1;
    FUN_0041f1d7();
    Exception_setFunctionName(this_00,local_40c);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_440,"Game.cpp");
    local_410._0_1_ = 4;
    Exception_setSourceFile(this_00,local_440);
    local_410 = CONCAT31(local_410._1_3_,1);
    FUN_0041f1d7();
    Exception_setLineNumber(this_00,0xdd0);
    local_448 = this_00;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_448,&DAT_01aa602c);
  }
  (**(code **)(*(int *)this + 500))();
  ExceptionList = local_418;
  return (bool)local_41d;
}

