// addr: 0x007487a0
// name: Deep_InputLayoutEntry_parseSemantic
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char Deep_InputLayoutEntry_parseSemantic(char * semanticName) */

char Deep_InputLayoutEntry_parseSemantic(char *semanticName)

{
  int iVar1;
  
                    /* Maps vertex input semantic strings such as Position, Normal, Texcoord,
                       BlendWeight, and Depth to small internal numeric semantic codes. */
  iVar1 = FUN_00401940(semanticName,"PositionT",9);
  if (iVar1 == 0) {
    return '\b';
  }
  iVar1 = FUN_00401940(semanticName,"Position",8);
  if (iVar1 == 0) {
    return '\0';
  }
  iVar1 = FUN_00401940(semanticName,"Color",5);
  if (iVar1 == 0) {
    return '\t';
  }
  iVar1 = FUN_00401940(semanticName,"Texcoord",8);
  if (iVar1 == 0) {
    return '\x05';
  }
  iVar1 = FUN_00401940(semanticName,"Normal",6);
  if (iVar1 == 0) {
    return '\x03';
  }
  iVar1 = FUN_00401940(semanticName,"Tangent",7);
  if (iVar1 == 0) {
    return '\x06';
  }
  iVar1 = FUN_00401940(semanticName,"Binormal",8);
  if (iVar1 == 0) {
    return '\a';
  }
  iVar1 = FUN_00401940(semanticName,"BlendWeight",0xb);
  if (iVar1 == 0) {
    return '\x01';
  }
  iVar1 = FUN_00401940(semanticName,"BlendIndices",0xc);
  if (iVar1 == 0) {
    return '\x02';
  }
  iVar1 = FUN_00401940(semanticName,"Psize",5);
  if (iVar1 == 0) {
    return '\x04';
  }
  iVar1 = FUN_00401940(semanticName,&DAT_017eab14,3);
  if (iVar1 == 0) {
    return '\n';
  }
  iVar1 = FUN_00401940(semanticName,"Depth",0xc);
  return (iVar1 != 0) + '\v';
}

