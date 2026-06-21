// addr: 0x013543a0
// name: Game_setOutOfSync
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setOutOfSync(void * this, bool outOfSync_) */

void __thiscall Game_setOutOfSync(void *this,bool outOfSync_)

{
  void *pvVar1;
  void *unaff_ESI;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs and writes '#SET OUT OF SYNC', then builds a display/action command with
                       the supplied bool and an int argument to notify clients/state. Evidence:
                       explicit out-of-sync strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d85b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_logGeneral(this,"SET OUT OF SYNC",DAT_01b839d8 ^ (uint)&stack0xffffffec);
  Game_writeGameLog(this,"#SET OUT OF SYNC");
  *(bool *)((int)this + 0x14c) = outOfSync_;
  pvVar1 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x14);
  DisplayActionBuilder_addIntArg(this_00,0x2c);
  DisplayActionBuilder_addBoolArg(this_00,true);
  (**(code **)(*(int *)this + 0x154))(this_00);
  *(undefined1 *)((int)this + 0x1d8) = 1;
  ExceptionList = unaff_ESI;
  return;
}

