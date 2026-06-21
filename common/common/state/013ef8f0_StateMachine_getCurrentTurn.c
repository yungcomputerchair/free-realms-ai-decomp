// addr: 0x013ef8f0
// name: StateMachine_getCurrentTurn
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateMachine_getCurrentTurn(void * this) */

void * __fastcall StateMachine_getCurrentTurn(void *this)

{
  void *pvVar1;
  
                    /* Thin wrapper that retrieves the current turn from the machine's game object
                       via Game_getCurrentTurn. Called by StateMachineState helpers that need
                       mMachine's current turn. */
  pvVar1 = Game_getCurrentTurn(*(void **)((int)this + 4));
  return pvVar1;
}

