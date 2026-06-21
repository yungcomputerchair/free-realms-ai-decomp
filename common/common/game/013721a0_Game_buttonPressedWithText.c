// addr: 0x013721a0
// name: Game_buttonPressedWithText
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_buttonPressedWithText(void * this, int playerID_, int buttonID_,
   void * text) */

bool __thiscall Game_buttonPressedWithText(void *this,int playerID_,int buttonID_,void *text)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  uint uStack_450;
  int local_440 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_430;
  void *local_42c;
  undefined1 local_425;
  undefined1 *local_424;
  void *local_420;
  undefined1 *puStack_41c;
  int local_418;
  int local_414;
  int local_410;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40c [1028];
  uint local_8;
  
                    /* Logs and dispatches buttonPressedWithText to the current state machine with
                       event id 0xc, copying the text string into the event payload. It asserts
                       mCurrentTurn and its state machine. */
  pvVar3 = text;
  puStack_41c = &LAB_01680f0b;
  local_420 = ExceptionList;
  uStack_450 = DAT_01b839d8 ^ (uint)&local_414;
  local_424 = (undefined1 *)&uStack_450;
  ExceptionList = &local_420;
  local_430 = text;
  local_425 = 0;
  local_418 = 0;
  local_42c = this;
  puVar4 = &uStack_450;
  local_8 = uStack_450;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x1365);
    puVar4 = (uint *)local_424;
  }
  local_424 = (undefined1 *)puVar4;
  pvVar5 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar5 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x1366);
  }
  iVar2 = buttonID_;
  iVar1 = playerID_;
  if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
    iVar6 = (int)pvVar3 + 4;
  }
  else {
    iVar6 = *(int *)((int)pvVar3 + 4);
  }
  Game_writeGameLog(this,"buttonPressedWithText\t%d\t%d\t%s",playerID_,buttonID_,iVar6);
  TimeStamp_setCurrentFtime(local_440);
  piVar7 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
  *piVar7 = local_440[0];
  ValueDataArg_initEmptyString(&local_414);
  local_418._0_1_ = 1;
  local_414 = iVar1;
  local_410 = iVar2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_40c,local_430,0,0xffffffff);
  piVar7 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  local_425 = (**(code **)(*piVar7 + 0x38))(0xc,&local_414);
  local_418 = (uint)local_418._1_3_ << 8;
  EmbeddedStdString_clearAt0C(&local_414);
  ExceptionList = local_420;
  return (bool)local_425;
}

