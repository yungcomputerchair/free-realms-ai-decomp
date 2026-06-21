// addr: 0x013ebd40
// name: PropertyBlob_compare40
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyBlob_compare40(void * lhs, void * rhs) */

bool PropertyBlob_compare40(void *lhs,void *rhs)

{
  uint uVar1;
  
                    /* Compares two 0x28-byte property/blob records and returns true when the
                       comparison helper reports a match. The fixed length 0x28 is passed directly
                       to FUN_013eb7b0. */
  uVar1 = DeckValidation_requireMinimumDrawDeckCards(lhs,rhs,0x28);
  return (char)uVar1 != '\0';
}

