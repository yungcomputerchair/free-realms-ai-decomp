// addr: 0x01371dc0
// name: Game_buttonPressed
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_buttonPressed(void * this, int playerID_, int buttonID_, bool
   throwOnFailure_) */

bool __thiscall Game_buttonPressed(void *this,int playerID_,int buttonID_,bool throwOnFailure_)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uStack_48c;
  int local_47c [3];
  void *local_470 [2];
  void *local_468;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_464 [28];
  void *local_448;
  char local_441;
  undefined1 *local_440;
  void *local_43c;
  undefined1 *puStack_438;
  int local_434;
  int local_430;
  int local_42c;
  undefined1 local_40c [4];
  undefined1 local_408;
  undefined4 local_3f8;
  undefined4 local_3f4;
  char local_3f0 [1000];
  uint local_8;
  
                    /* Logs and dispatches a buttonPressed event to the current state machine with
                       event id 0xb. If requested, it throws an exception when the state rejects the
                       button. */
  puStack_438 = &LAB_01680eae;
  local_43c = ExceptionList;
  uStack_48c = DAT_01b839d8 ^ (uint)&local_430;
  local_440 = (undefined1 *)&uStack_48c;
  ExceptionList = &local_43c;
  local_441 = 0;
  local_434 = 0;
  local_448 = this;
  puVar3 = &uStack_48c;
  local_8 = uStack_48c;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x1313);
    puVar3 = (uint *)local_440;
  }
  local_440 = (undefined1 *)puVar3;
  pvVar4 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar4 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x1314);
  }
  iVar2 = buttonID_;
  iVar1 = playerID_;
  Game_writeGameLog(this,"buttonPressed\t%d\t%d",playerID_,buttonID_);
  if (throwOnFailure_ == false) {
    Game_recordActionLogMessage(this,"buttonPressed\t%d\t%d",iVar1,iVar2);
  }
  TimeStamp_setCurrentFtime(local_47c);
  piVar5 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
  *piVar5 = local_47c[0];
  ValueDataArg_initEmptyString(&local_430);
  local_434._0_1_ = 1;
  local_430 = iVar1;
  local_42c = iVar2;
  piVar5 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  local_441 = (**(code **)(*piVar5 + 0x38))(0xb,&local_430);
  if ((local_441 == '\0') && (throwOnFailure_ == true)) {
    local_3f4 = 0xf;
    pvVar4 = (void *)0x0;
    local_3f8 = 0;
    local_408 = 0;
    local_434._0_1_ = 2;
    puVar6 = local_40c;
    GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
    GameTurn_describeStateStack(puVar6);
    local_468 = Mem_Alloc(100);
    local_434._0_1_ = 3;
    if (local_468 != (void *)0x0) {
      pvVar4 = (void *)Exception_ctor();
    }
    local_434._0_1_ = 2;
    _sprintf(local_3f0,"ButtonPressed returned false! playerid: %d, buttonID: %d matchID: %d",
             playerID_);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_464,local_3f0);
    local_434._0_1_ = 4;
    Exception_setMessage(pvVar4,local_464);
    local_434._0_1_ = 2;
    FUN_0041f1d7();
    Exception_setFunctionName(pvVar4,local_40c);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_464,"Game.cpp");
    local_434._0_1_ = 5;
    Exception_setSourceFile(pvVar4,local_464);
    local_434 = CONCAT31(local_434._1_3_,2);
    FUN_0041f1d7();
    Exception_setLineNumber(pvVar4,0x132e);
    local_470[0] = pvVar4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_470,&DAT_01aa602c);
  }
  local_434 = (uint)local_434._1_3_ << 8;
  EmbeddedStdString_clearAt0C(&local_430);
  ExceptionList = local_43c;
  return (bool)local_441;
}

