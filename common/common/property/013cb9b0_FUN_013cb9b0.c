// addr: 0x013cb9b0
// name: FUN_013cb9b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CardPronounTable_getMasculine(void) */

void CardPronounTable_getMasculine(void)

{
                    /* Initializes the card pronoun table if needed and retrieves a pronoun entry.
                        */
  if (DAT_01cbdd84 == '\0') {
    TcgClient_initializeGlobalStringTables();
  }
  FUN_013ca7f0(&stack0x00000004);
  return;
}

