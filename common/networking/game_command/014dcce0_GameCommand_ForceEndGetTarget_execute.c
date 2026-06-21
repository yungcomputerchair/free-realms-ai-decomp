// addr: 0x014dcce0
// name: GameCommand_ForceEndGetTarget_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandForceEndGetTarget.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_ForceEndGetTarget_execute(void * this) */

int __fastcall GameCommand_ForceEndGetTarget_execute(void *this)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
                    /* Executes ForceEndGetTarget by checking that the active state is the expected
                       GetTargetState and then calling the helper that force-ends target selection.
                        */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandForceEndGetTarget.cpp",
                 0x24);
  }
  GameCommand_execute(this);
  this_00 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_getCurrentStateMachine(this_00);
  iVar1 = StateMachine_getCurrentState();
  if (iVar1 != 0) {
    iVar2 = FUN_00d8d382(iVar1,0,&StateMachineState::RTTI_Type_Descriptor,
                         &GetTargetState::RTTI_Type_Descriptor,0);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_01347a90();
      if (iVar1 == *(int *)((int)this + 0x24)) {
        iVar1 = FUN_0141b910();
      }
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 1;
}

