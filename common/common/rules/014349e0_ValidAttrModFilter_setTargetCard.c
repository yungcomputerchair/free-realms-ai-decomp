// addr: 0x014349e0
// name: ValidAttrModFilter_setTargetCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidAttrModFilter_setTargetCard(void * filter, void * card) */

void __thiscall ValidAttrModFilter_setTargetCard(void *this,void *filter,void *card)

{
                    /* Stores a card/play-element pointer at offset 0x5c in ValidAttrModFilter for
                       later filter evaluation. */
  *(void **)((int)this + 0x5c) = filter;
  return;
}

