// addr: 0x01470ed0
// name: ExecuteRuleState_sub_01470ed0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExecuteRuleState_sub_01470ed0(void * this) */

void __fastcall ExecuteRuleState_sub_01470ed0(void *this)

{
                    /* If mPreviousState is absent, uses the base StateMachineState default handler;
                       otherwise delegates to the previous state through
                       CancellableStateMachineState. Exact virtual method name is not evident. */
  if (*(int *)((int)this + 4) == 0) {
    return_zero();
    return;
  }
  CancellableStateMachineState_sub_0147c620(this);
  return;
}

