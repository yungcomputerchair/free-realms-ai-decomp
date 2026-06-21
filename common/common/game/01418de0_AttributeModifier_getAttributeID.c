// addr: 0x01418de0
// name: AttributeModifier_getAttributeID
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AttributeModifier_getAttributeID(void * this) */

int __fastcall AttributeModifier_getAttributeID(void *this)

{
                    /* Returns the integer at +0x64, used by Card.cpp and state logic as the
                       modified attribute/keyword id. AttributeModifier RTTI appears in the dynamic
                       mapped keyword caller. */
  return *(int *)((int)this + 100);
}

