// addr: 0x005f438b
// name: LexerDfaState_resetTransitions
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LexerDfaState_resetTransitions(void * state) */

void __thiscall LexerDfaState_resetTransitions(void *this,void *state)

{
                    /* Resets a lexer DFA state/transition structure by delegating to the transition
                       initializer with zero range bounds. */
  StdVector8_resize(this,(uint)state,0,0);
  return;
}

