// addr: 0x0138b220
// name: Game_sendAction7AAndMarkPlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_sendAction7AAndMarkPlayer(void * this, int unused_, int playerId_)
    */

bool __thiscall Game_sendAction7AAndMarkPlayer(void *this,int unused_,int playerId_)

{
  uint uVar1;
  void *pvVar2;
  int value_;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds display action 0x7a with current state and player id, sends it, then
                       marks the player through a follow-up helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168394b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x7a);
  value_ = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this_00,value_);
  DisplayActionBuilder_addIntArg(this_00,playerId_);
  (**(code **)(**(int **)((int)this + 0x30) + 0x154))(this_00);
  FUN_01357900(playerId_);
  ExceptionList = pvVar2;
  return true;
}

