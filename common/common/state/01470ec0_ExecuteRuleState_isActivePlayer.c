// addr: 0x01470ec0
// name: ExecuteRuleState_isActivePlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExecuteRuleState_isActivePlayer(void * this) */

void __thiscall ExecuteRuleState_isActivePlayer(void *this)

{
  int in_stack_00000004;
  
                    /* If mPreviousState is absent, runs StateMachineState_isActivePlayer; otherwise
                       delegates the query to the previous state through
                       CancellableStateMachineState. */
  if (*(int *)((int)this + 4) == 0) {
    StateMachineState_isActivePlayer(this,in_stack_00000004);
    return;
  }
  CancellableStateMachineState_sub_0147c680(this);
  return;
}

