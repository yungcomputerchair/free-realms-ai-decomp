// addr: 0x01312ba0
// name: StateMachine_requestAIInputIfNeeded
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_requestAIInputIfNeeded(void * stateMachine) */

void __fastcall StateMachine_requestAIInputIfNeeded(void *stateMachine)

{
  char cVar1;
  
                    /* Calls a virtual predicate at vtable +0x1a0 and invokes
                       CWAIController_getInput(0) when it returns true. */
  cVar1 = (**(code **)(*(int *)stateMachine + 0x1a0))();
  if (cVar1 == '\x01') {
    CWAIController_getInput(0);
  }
  return;
}

