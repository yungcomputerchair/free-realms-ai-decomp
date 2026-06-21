// addr: 0x01312bc0
// name: StateMachine_updateCurrentTurnForResult
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_updateCurrentTurnForResult(int result_) */

void StateMachine_updateCurrentTurnForResult(int result_)

{
                    /* Calls the same current-turn/state update helper regardless of whether the
                       result equals 1. The branch is redundant in the decompile, so exact semantics
                       are unclear. */
  if (result_ == 1) {
    CWAIController_getInput();
    return;
  }
  CWAIController_getInput();
  return;
}

