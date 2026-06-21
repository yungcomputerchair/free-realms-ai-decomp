// addr: 0x010b61e0
// name: ActorProjectileDefinition_writeTargetBoneXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActorProjectileDefinition_writeTargetBoneXml(void * this, void * element)
    */

bool __thiscall ActorProjectileDefinition_writeTargetBoneXml(void *this,void *element)

{
  char *value;
  char cVar1;
  
                    /* Writes projectile target-bone XML data after the base writer succeeds; emits
                       targetBoneName when present. Evidence: calls a base XML writer and then sets
                       the 'targetBoneName' attribute from offset 0x9c. */
  cVar1 = FUN_007c9dd0(element);
  if (cVar1 != '\0') {
    value = *(char **)((int)this + 0x9c);
    if ((value != (char *)0x0) && (*value != '\0')) {
      TiXmlElement_SetAttribute(element,"targetBoneName",value);
    }
    return true;
  }
  return false;
}

