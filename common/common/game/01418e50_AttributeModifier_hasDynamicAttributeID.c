// addr: 0x01418e50
// name: AttributeModifier_hasDynamicAttributeID
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AttributeModifier_hasDynamicAttributeID(void * this) */

bool __fastcall AttributeModifier_hasDynamicAttributeID(void *this)

{
                    /* Returns true when the flag byte at +0x69 is set and the attribute id at +0x64
                       is nonzero. Used during Card.cpp dynamic modifier attribute calculation. */
  if ((*(char *)((int)this + 0x69) != '\0') && (*(int *)((int)this + 100) != 0)) {
    return true;
  }
  return false;
}

