// addr: 0x0134d590
// name: Game_notifyCurrentStateMachine
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_notifyCurrentStateMachine(void * this) */

void __fastcall Game_notifyCurrentStateMachine(void *this)

{
  void *pvVar1;
  
                    /* If a flag/member is set and the current GameTurn state machine exists,
                       invokes a state-machine helper. Exact action is not evident. */
  if (*(void **)((int)this + 0x68) != (void *)0x0) {
    pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
    if (pvVar1 != (void *)0x0) {
      GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
      GameTurn_describeCurrentStateStack();
      return;
    }
  }
  return;
}

