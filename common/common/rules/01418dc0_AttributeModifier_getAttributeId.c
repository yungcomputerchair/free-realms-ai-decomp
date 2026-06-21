// addr: 0x01418dc0
// name: AttributeModifier_getAttributeId
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AttributeModifier_getAttributeId(void * modifier) */

int __fastcall AttributeModifier_getAttributeId(void *modifier)

{
                    /* Returns the AttributeModifier integer member at offset 0x50, used as the
                       attribute id when checking ValidAttrModFilter and modify-property setup. */
  return *(int *)((int)modifier + 0x50);
}

