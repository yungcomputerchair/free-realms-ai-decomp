// addr: 0x0145c710
// name: StateMachineState_shouldContinueWaiting
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_shouldContinueWaiting(void * this) */

int __fastcall StateMachineState_shouldContinueWaiting(void *this)

{
  bool bVar1;
  void *pvVar2;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar3;
  undefined4 uVar4;
  
                    /* Consults the machine and game state; if one machine predicate is false and
                       another is true, it clears a machine flag/counter and returns 0, otherwise
                       returns 1 when no action is needed. Exact method name is inferred from
                       control flow only. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pvVar2 = (void *)get_field_4(*(void **)((int)this + 8));
  bVar1 = Game_getPendingFlag_131(pvVar2);
  uVar3 = extraout_var;
  if (!bVar1) {
    if (*(int *)((int)this + 8) == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
    }
    pvVar2 = StateMachine_getCurrentTurn(*(void **)((int)this + 8));
    bVar1 = get_flag_44(pvVar2);
    if (!bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    if (*(int *)((int)this + 8) == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
    }
    uVar4 = 0;
    StateMachine_getCurrentTurn(*(void **)((int)this + 8));
    StateMachine_setContinueWaiting(uVar4);
    uVar3 = extraout_var_01;
  }
  return (uint)uVar3 << 8;
}

