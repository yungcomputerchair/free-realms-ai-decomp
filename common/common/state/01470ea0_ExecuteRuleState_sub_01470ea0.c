// addr: 0x01470ea0
// name: ExecuteRuleState_sub_01470ea0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExecuteRuleState_sub_01470ea0(void * this) */

void __thiscall ExecuteRuleState_sub_01470ea0(void *this)

{
  void *in_stack_00000004;
  void *in_stack_00000008;
  void *in_stack_0000000c;
  void *in_stack_00000010;
  void *in_stack_00000014;
  void *in_stack_00000018;
  void *in_stack_0000001c;
  
                    /* If mPreviousState is absent, uses the base StateMachineState default handler;
                       otherwise delegates to the previous state through
                       CancellableStateMachineState. Exact virtual method name is not evident. */
  if (*(int *)((int)this + 4) == 0) {
    ExecuteRuleState_sendMessageText4
              (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010,
               in_stack_00000014,in_stack_00000018,in_stack_0000001c);
    return;
  }
  CancellableStateMachineState_sub_0147c720(this);
  return;
}

