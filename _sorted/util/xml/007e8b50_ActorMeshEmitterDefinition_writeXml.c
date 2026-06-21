// addr: 0x007e8b50
// name: ActorMeshEmitterDefinition_writeXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActorMeshEmitterDefinition_writeXml(void * this, void * element) */

bool __thiscall ActorMeshEmitterDefinition_writeXml(void *this,void *element)

{
  char cVar1;
  char *pcVar2;
  
                    /* Serializes mesh emitter effect XML attributes including sourceBoneName,
                       local/world orientation flags, definitionName, hardStop, and optional sound
                       control. Evidence: referenced attribute strings and a base writer gate. */
  cVar1 = FUN_007c9dd0(element);
  if (cVar1 != '\0') {
    pcVar2 = *(char **)((int)this + 0xac);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      TiXmlElement_SetAttribute(element,"sourceBoneName",pcVar2);
    }
    pcVar2 = "true";
    if ((*(byte *)((int)this + 0xb8) & 0x40) == 0) {
      pcVar2 = "false";
    }
    TiXmlElement_SetAttribute(element,"localSpaceDerived",pcVar2);
    pcVar2 = "true";
    if ((*(byte *)((int)this + 0xb8) & 0x80) == 0) {
      pcVar2 = "false";
    }
    TiXmlElement_SetAttribute(element,"worldOrientation",pcVar2);
    TiXmlElement_SetAttribute(element,"definitionName",*(char **)((int)this + 0x9c));
    if ((*(byte *)((int)this + 0xb8) & 0x20) != 0) {
      TiXmlElement_SetAttribute(element,"hardStop","true");
    }
    if ((*(void **)((int)this + 0xc0) != (void *)0x0) &&
       (*(void **)((int)this + 0xc4) != (void *)0x0)) {
      EffectVariableBindings_writeXml
                (element,*(void **)((int)this + 0xc0),*(void **)((int)this + 0xc4));
    }
    return true;
  }
  return false;
}

