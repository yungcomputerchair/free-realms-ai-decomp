// addr: 0x01434990
// name: ValidAttrModFilter_setAttributeId
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidAttrModFilter_setAttributeId(void * filter, int attributeId_) */

void __thiscall ValidAttrModFilter_setAttributeId(void *this,void *filter,int attributeId_)

{
                    /* Stores the required attribute id at offset 0x48 of a ValidAttrModFilter. */
  *(void **)((int)this + 0x48) = filter;
  return;
}

