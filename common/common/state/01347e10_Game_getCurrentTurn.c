// addr: 0x01347e10
// name: Game_getCurrentTurn
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_getCurrentTurn(void * this) */

void * __fastcall Game_getCurrentTurn(void *this)

{
                    /* Returns the pointer stored at offset +0x68, which StateMachine code asserts
                       as mGame->getCurrentTurn(). Cross-references include
                       StateMachine_processCurrentTurn and StateMachine_processStateResult
                       current-turn dispatch. */
  return *(void **)((int)this + 0x68);
}

