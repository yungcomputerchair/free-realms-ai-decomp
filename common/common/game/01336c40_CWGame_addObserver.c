// addr: 0x01336c40
// name: CWGame_addObserver
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_addObserver(void * this, int playerId_) */

void __thiscall CWGame_addObserver(void *this,int playerId_)

{
  int value;
  uint uVar1;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  value = playerId_;
                    /* Logs and writes an observer-addition game log entry, constructs a
                       command/object for the observer, updates state fields, and dispatches it.
                       Evidence: strings 'Adding Observer to CWGame'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b6ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  Game_logGeneral(this,"Adding Observer to CWGame: %d",playerId_);
  Game_writeGameLog(this,"#Adding Observer to CWGame: %d",value);
  playerId_ = (int)Mem_Alloc(100);
  this_00 = (void *)0x0;
  local_4 = 0;
  if ((void *)playerId_ != (void *)0x0) {
    this_00 = (void *)CWPlayer_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  PlayElement_setField34_01344e90(this_00,value);
  StateMachine_setCurrentState(this_00,this);
  playerId_ = (int)this_00;
  FUN_01336350(&playerId_);
  ExceptionList = local_c;
  return;
}

