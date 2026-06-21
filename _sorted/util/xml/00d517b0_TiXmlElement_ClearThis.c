// addr: 0x00d517b0
// name: TiXmlElement_ClearThis
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlElement_ClearThis(void * this) */

void __fastcall TiXmlElement_ClearThis(void *this)

{
  void *this_00;
  void *pvVar1;
  undefined4 *attribute;
  
                    /* Clears an element by deleting all child nodes and removing/deleting every
                       attribute in its attribute set. Evidence: calls TiXmlNode_ClearChildren,
                       loops the attribute sentinel, removes each attribute, and invokes its
                       deleting destructor. */
  TiXmlNode_ClearChildren(this);
  this_00 = (void *)((int)this + 0x2c);
  while ((pvVar1 = *(void **)((int)this + 0x4c), pvVar1 != this_00 && (pvVar1 != (void *)0x0))) {
    attribute = (undefined4 *)(-(uint)(pvVar1 != this_00) & (uint)pvVar1);
    TiXmlAttributeSet_Remove(this_00,attribute);
    if (attribute != (undefined4 *)0x0) {
      (**(code **)*attribute)(1);
    }
  }
  return;
}

