// addr: 0x010bf310
// name: ActorEffectDefinition_typeToString
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ActorEffectDefinition_typeToString(undefined4 param_1)

{
                    /* Maps actor effect type enum values to XML string names such as PARTICLE,
                       SOUND, MODELMATERIAL, LIGHT, CAMERA, PROJECTILE, and RUMBLE. Evidence: caller
                       writes the returned value to an 'effectType' XML attribute. */
  switch(param_1) {
  case 0:
    return "PARTICLE";
  case 1:
    return "SOUND";
  case 2:
    return "MODELMATERIAL";
  case 3:
    return "LIGHT";
  case 4:
    return "CAMERA";
  case 5:
    return "PROJECTILE";
  case 6:
    return "MESH";
  case 7:
    return "LIGHTSABERTRAIL";
  case 8:
    return "RUMBLE";
  default:
    return "UNKNOWN";
  }
}

