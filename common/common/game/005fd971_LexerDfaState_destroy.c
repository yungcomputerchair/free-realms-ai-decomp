// addr: 0x005fd971
// name: LexerDfaState_destroy
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LexerDfaState_destroy(void * state) */

void LexerDfaState_destroy(void *state)

{
                    /* Thin destructor/reset wrapper for a lexer DFA state object. */
  LexerDfaState_resizeTransitions(state);
  return;
}

