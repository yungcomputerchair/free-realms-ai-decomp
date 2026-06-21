// addr: 0x014dd1d0
// name: GameCommand_FinishMultiaction_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFinishMultiaction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_FinishMultiaction_execute(void * this) */

int __fastcall GameCommand_FinishMultiaction_execute(void *this)

{
  void *pvVar1;
  int iVar2;
  
                    /* Executes FinishMultiaction by comparing the command's GetTargetState id with
                       the active GetTargetState, logging both ids, and finishing the multiaction
                       when they match. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandFinishMultiaction.cpp",
                 0x1e);
  }
  GameCommand_execute(this);
  pvVar1 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_getCurrentStateMachine(pvVar1);
  iVar2 = StateMachine_getCurrentState();
  if (iVar2 != 0) {
    pvVar1 = (void *)FUN_00d8d382(iVar2,0,&StateMachineState::RTTI_Type_Descriptor,
                                  &GetTargetState::RTTI_Type_Descriptor,0);
    iVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      GetTargetState_getTargetStateID(pvVar1);
      Game_logGeneral(*(void **)((int)this + 8),
                      "GameCommand_FinishMultiaction: mGetTargetState: %d, gtsGetTargetState: %d",
                      *(undefined4 *)((int)this + 0x24));
      iVar2 = GetTargetState_getTargetStateID(pvVar1);
      if (iVar2 == *(int *)((int)this + 0x24)) {
        iVar2 = (**(code **)(**(int **)((int)this + 8) + 0xe4))(*(undefined4 *)((int)this + 4),1,0);
      }
    }
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return 1;
}

