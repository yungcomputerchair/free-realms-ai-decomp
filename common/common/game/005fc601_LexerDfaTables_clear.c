// addr: 0x005fc601
// name: LexerDfaTables_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LexerDfaTables_clear(void) */

void LexerDfaTables_clear(void)

{
  int in_ECX;
  
                    /* Clears several lexer/DFA table containers by calling their clear/reset
                       helpers in sequence. */
  FUN_005db4a0();
  StdVector16_clearAndReset((void *)(in_ECX + 0x30));
  FUN_00420fb6();
  FUN_00420fb6();
  FUN_005eacc6();
  return;
}

