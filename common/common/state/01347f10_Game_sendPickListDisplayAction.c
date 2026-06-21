// addr: 0x01347f10
// name: Game_sendPickListDisplayAction
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_sendPickListDisplayAction(void * this, int selectedPhase_) */

void __thiscall Game_sendPickListDisplayAction(void *this,int selectedPhase_)

{
  void *pvVar1;
  int value_;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds display action 0x5f, adds player/card/phase ids as integer args, and
                       sends it through the game virtual dispatch. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167d30b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (void *)0x0;
  value_ = 0;
  if (*(int **)((int)this + 0x68) != (int *)0x0) {
    value_ = (**(code **)(**(int **)((int)this + 0x68) + 0x3c))
                       (DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  }
  pvVar1 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvVar1 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x5f);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 0x14));
  DisplayActionBuilder_addIntArg(this_00,selectedPhase_);
  DisplayActionBuilder_addIntArg(this_00,value_);
  (**(code **)(*(int *)this + 0x154))(this_00);
  ExceptionList = pvVar1;
  return;
}

