// addr: 0x014d70a0
// name: GameCommand_ValueList_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandValueList.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_ValueList_execute(void * this) */

int __fastcall GameCommand_ValueList_execute(void *this)

{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes ValueList by locating the current PickListState-like state and
                       passing the command's value list payload into its receive-list handler. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ad528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60();
  }
  GameCommand_execute(this);
  this_00 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_getCurrentStateMachine(this_00);
  uVar1 = StateMachine_getCurrentState();
  iVar2 = FUN_00d8d382(uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    FUN_01246d00((int)this + 0x24);
    uStack_4 = 0xffffffff;
    uVar1 = PickListState_receiveList();
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

