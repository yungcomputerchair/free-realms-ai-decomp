// addr: 0x0087d5a0
// name: TiXmlElement_SetBoolAttribute
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlElement_SetBoolAttribute(void * element, char * name, bool value_)
    */

void __cdecl TiXmlElement_SetBoolAttribute(void *element,char *name,bool value_)

{
  char *value;
  
                    /* Sets a TinyXML attribute to the literal string 'true' or 'false' based on a
                       boolean input. Evidence: chooses between those literals and calls
                       TiXmlElement::SetAttribute. */
  value = "true";
  if (!value_) {
    value = "false";
  }
  TiXmlElement_SetAttribute(element,name,value);
  return;
}

