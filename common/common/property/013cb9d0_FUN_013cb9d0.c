// addr: 0x013cb9d0
// name: FUN_013cb9d0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CardPronounTable_getFeminine(void) */

void CardPronounTable_getFeminine(void)

{
                    /* Initializes the card pronoun table if needed and retrieves a pronoun entry.
                        */
  if (DAT_01cbdd84 == '\0') {
    TcgClient_initializeGlobalStringTables();
  }
  FUN_013ca7f0(&stack0x00000004);
  return;
}

