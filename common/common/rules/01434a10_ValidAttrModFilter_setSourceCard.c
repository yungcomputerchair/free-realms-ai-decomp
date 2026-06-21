// addr: 0x01434a10
// name: ValidAttrModFilter_setSourceCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidAttrModFilter_setSourceCard(void * filter, void * card) */

void __thiscall ValidAttrModFilter_setSourceCard(void *this,void *filter,void *card)

{
                    /* Stores a card/play-element pointer at offset 0x58 in ValidAttrModFilter for
                       the predicate check. */
  *(void **)((int)this + 0x58) = filter;
  return;
}

