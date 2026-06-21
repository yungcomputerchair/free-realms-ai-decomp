// addr: 0x013706e0
// name: Game_actionPlayed
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_actionPlayed(void * this, int playerID_, int cardID_, int actionID_,
   bool throwOnFailure_, bool fromReplay_) */

bool __thiscall
Game_actionPlayed(void *this,int playerID_,int cardID_,int actionID_,bool throwOnFailure_,
                 bool fromReplay_)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int local_464 [3];
  int local_458;
  int local_454;
  int local_450;
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
  
                    /* Logs and dispatches actionPlayed for a card/action unless the game has ended,
                       recording the active card during dispatch. Optionally throws if the state
                       machine rejects the event. */
  iVar2 = actionID_;
  puStack_414 = &LAB_01680bc6;
  local_418 = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)local_40c;
  local_41c = &stack0xfffffb8c;
  ExceptionList = &local_418;
  local_41d = 0;
  if (actionID_ == 0) {
    local_41d = '\0';
  }
  else {
    local_410 = 0;
    local_424 = this;
    puVar5 = &stack0xfffffb8c;
    local_8 = uVar3;
    if (*(int *)((int)this + 0x68) == 0) {
      FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xe8f);
      puVar5 = local_41c;
    }
    local_41c = puVar5;
    iVar1 = playerID_;
    Game_writeGameLog(this,"actionPlayed\t%d\t%d\t%d",playerID_,cardID_,iVar2);
    if (throwOnFailure_ == false) {
      Game_recordActionLogMessage(this,"actionPlayed\t%d\t%d\t%d",iVar1,cardID_,iVar2);
    }
    if (*(char *)((int)this + 0x1d8) == '\x01') {
      Game_logGeneral(this,"Game is ended, not doing ActionPlayed",uVar3);
      local_41d = '\x01';
    }
    else {
      TimeStamp_setCurrentFtime(local_464);
      piVar4 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
      *piVar4 = local_464[0];
      *(int *)((int)this + 0x2ac) = iVar1;
      *(bool *)((int)this + 0x2a9) = fromReplay_;
      local_458 = iVar1;
      local_454 = cardID_;
      local_450 = iVar2;
      piVar4 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
      local_41d = (**(code **)(*piVar4 + 0x38))(4,&local_458);
      local_448 = (void *)0x0;
      *(undefined4 *)((int)this + 0x2ac) = 0;
      if ((local_41d == '\0') && (throwOnFailure_ == true)) {
        local_3f4 = 0xf;
        local_3f8 = 0;
        local_408 = 0;
        local_410._0_1_ = 1;
        puVar5 = local_40c;
        GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
        GameTurn_describeStateStack(puVar5);
        local_444 = Mem_Alloc(100);
        local_410._0_1_ = 2;
        if (local_444 != (void *)0x0) {
          local_448 = (void *)Exception_ctor();
        }
        local_410._0_1_ = 1;
        _sprintf(local_3f0,
                 "actionPlayed returned false! playerid: %d, cardID: %d actionID: %d matchID: %d",
                 iVar1);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_440,local_3f0);
        local_410._0_1_ = 3;
        Exception_setMessage(local_448,local_440);
        local_410._0_1_ = 1;
        FUN_0041f1d7();
        Exception_setFunctionName(local_448,local_40c);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_440,"Game.cpp");
        local_410._0_1_ = 4;
        Exception_setSourceFile(local_448,local_440);
        local_410 = CONCAT31(local_410._1_3_,1);
        FUN_0041f1d7();
        Exception_setLineNumber(local_448,0xeb1);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_448,&DAT_01aa602c);
      }
    }
  }
  ExceptionList = local_418;
  return (bool)local_41d;
}

