// addr: 0x00d50f40
// name: TiXmlAttributeSet_Add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlAttributeSet_Add(void * this, void * attribute) */

void __thiscall TiXmlAttributeSet_Add(void *this,void *attribute)

{
                    /* Adds an attribute to the circular doubly linked TiXmlAttributeSet before the
                       sentinel. Evidence: writes prev/next links at offsets 0x1c and 0x20, matching
                       TinyXML attribute set insertion. */
  *(void **)((int)attribute + 0x20) = this;
  *(undefined4 *)((int)attribute + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(void **)(*(int *)((int)this + 0x1c) + 0x20) = attribute;
  *(void **)((int)this + 0x1c) = attribute;
  return;
}

