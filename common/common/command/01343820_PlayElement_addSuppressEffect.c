// addr: 0x01343820
// name: PlayElement_addSuppressEffect
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_addSuppressEffect(void * this, void * keywordData) */

void __thiscall PlayElement_addSuppressEffect(void *this,void *keywordData)

{
  int iVar1;
  
                    /* Adds a suppress-effect keyword from a ValueData. It accepts list/integer-list
                       data, delegates integer-list handling, and logs the exact
                       PlayElement::addSuppressEffect(ValueData) error for other types. */
  iVar1 = *(int *)((int)keywordData + 4);
  if (iVar1 == 2) {
    PlayElement_ensureSuppressEffectList(this);
    return;
  }
  if (iVar1 != 3) {
    Game_logGeneral(*(void **)((int)this + 0x30),
                    "PlayElement::addSuppressEffect(ValueData) couldnt\' get type: %d",iVar1);
  }
  return;
}

