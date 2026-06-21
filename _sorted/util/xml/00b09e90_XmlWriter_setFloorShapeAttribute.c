// addr: 0x00b09e90
// name: XmlWriter_setFloorShapeAttribute
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void XmlWriter_setFloorShapeAttribute(void) */

void XmlWriter_setFloorShapeAttribute(void)

{
  void *in_stack_00000004;
  
                    /* Writes a TinyXML attribute shape='floor'. Evidence: only referenced strings
                       are 'shape' and 'floor' and it calls TiXmlElement::SetAttribute. */
  TiXmlElement_SetAttribute(in_stack_00000004,"shape","floor");
  return;
}

