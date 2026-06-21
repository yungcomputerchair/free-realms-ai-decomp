// addr: 0x014e0a90
// name: GameCommand_CanPrevent_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCanPrevent.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_CanPrevent_execute(void * this) */

int __fastcall GameCommand_CanPrevent_execute(void *this)

{
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes CanPrevent by logging entry, finding the current prevent-related
                       state, and passing the command's collection at +0x24 into that state's
                       receive/update routine. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016af348;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60();
  }
  GameCommand_execute(this);
  Game_logGeneral(*(void **)((int)this + 8),"GameCommand_CanPrevent.execute",uVar1);
  this_00 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_getCurrentStateMachine(this_00);
  uVar2 = StateMachine_getCurrentState();
  iVar3 = FUN_00d8d382(uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    FUN_005f15f0((int)this + 0x24);
    uStack_4 = 0xffffffff;
    uVar2 = FUN_01481840();
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

