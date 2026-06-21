// addr: 0x01402800
// name: Match_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Match_deserialize(void * this, void * stream) */

bool __thiscall Match_deserialize(void *this,void *stream)

{
  void *serializer;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a Match object by reading base/object framing, then a game id
                       field at offset 0x70, and finishing the frame. */
  serializer = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = Match_deserializeRoleData(this,serializer);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x70));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(serializer);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

