// addr: 0x01362d00
// name: Game_addObserver
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_addObserver(void *param_1,void *param_2)

{
  int value;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  value = (int)param_2;
                    /* Adds an observer Player to a Game: logs 'Adding Observer to Game',
                       allocates/constructs a Player, sets its identifier, updates the state
                       machine, and inserts it into the game's player/observer collection. The
                       embedded log strings explicitly name the operation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f2fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"Adding Observer to Game: %d",param_2);
  Game_writeGameLog(param_1,"#Adding Observer to Game: %d",value);
  param_2 = Mem_Alloc(0x4c);
  this = (void *)0x0;
  local_4 = 0;
  if (param_2 != (void *)0x0) {
    this = Player_ctor(param_2);
  }
  local_4 = 0xffffffff;
  param_2 = this;
  PlayElement_setField34_01344e90(this,value);
  StateMachine_setCurrentState(this,param_1);
  FUN_01336350(&param_2);
  ExceptionList = local_c;
  return;
}

