// addr: 0x014dd740
// name: GameCommand_FinishCustomChoice_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFinishCustomChoice.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_FinishCustomChoice_execute(void * this) */

int __fastcall GameCommand_FinishCustomChoice_execute(void *this)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
                    /* Executes FinishCustomChoice by checking the current state is a
                       CustomChoiceDialogState for the expected state id, then tells the game to
                       finish the choice for the player. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandFinishCustomChoice.cpp",
                 0x2b);
  }
  GameCommand_execute(this);
  this_00 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_getCurrentStateMachine(this_00);
  iVar1 = StateMachine_getCurrentState();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00d8d382(iVar1,0,&StateMachineState::RTTI_Type_Descriptor,
                         &CustomChoiceDialogState::RTTI_Type_Descriptor,0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_01347a90();
      if (iVar2 == *(int *)((int)this + 0x28)) {
        iVar2 = (**(code **)(**(int **)((int)this + 8) + 0xe4))
                          (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24),0);
      }
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

