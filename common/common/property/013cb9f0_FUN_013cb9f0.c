// addr: 0x013cb9f0
// name: FUN_013cb9f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CardPronounTable_getNeutral(void) */

void CardPronounTable_getNeutral(void)

{
                    /* Initializes the card pronoun table if needed and retrieves a pronoun entry.
                        */
  if (DAT_01cbdd84 == '\0') {
    TcgClient_initializeGlobalStringTables();
  }
  FUN_013ca7f0(&stack0x00000004);
  return;
}

