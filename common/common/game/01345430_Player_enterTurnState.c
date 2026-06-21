// addr: 0x01345430
// name: Player_enterTurnState
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Player_enterTurnState(void * this) */

void __fastcall Player_enterTurnState(void *this)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  void *unaff_EDI;
  void *in_stack_00000004;
  
                    /* Updates selected/current state information for the player, notifies the game,
                       and then invokes a player callback. The method asserts mGame before sending
                       the notification. */
  pvVar1 = Game_getCurrentTurn(*(void **)((int)this + 8));
  if (pvVar1 != (void *)0x0) {
    pvVar2 = GameTurn_getCurrentStateMachine(pvVar1);
    if (pvVar2 != (void *)0x0) {
      GameTurn_getCurrentStateMachine(pvVar1);
      iVar3 = StateMachine_getCurrentState();
      if (iVar3 != 0) {
        pvVar2 = GameTurn_getCurrentStateMachine(pvVar1);
        uVar4 = get_field_1c_if_vector_nonempty(pvVar2);
        if (uVar4 != 0) {
          pvVar1 = GameTurn_getCurrentStateMachine(pvVar1);
          pvVar1 = (void *)get_field_1c_if_vector_nonempty(pvVar1);
          EvaluationEnvironment_copyFrom(in_stack_00000004,pvVar1,unaff_EDI);
        }
      }
    }
  }
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\game\\Player.cpp",0x342);
  }
  EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
  FUN_013815b0(this);
  return;
}

