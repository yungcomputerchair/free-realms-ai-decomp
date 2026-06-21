// addr: 0x013a1e40
// name: CollectionData_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionData_deserialize(void * this, void * stream) */

bool __thiscall CollectionData_deserialize(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  int iStack_4;
  
                    /* Deserializes CollectionData fields, including three serialized string/value
                       groups, an item map, and version-gated extra fields. */
  this_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if ((((cVar1 == '\0') ||
       (bVar2 = Deserializer_readString(this_00,(void *)((int)this + 4)), !bVar2)) ||
      (bVar2 = Deserializer_readString(this_00,(void *)((int)this + 0x20)), !bVar2)) ||
     ((bVar2 = Deserializer_readString(this_00,(void *)((int)this + 0x3c)), !bVar2 ||
      (uVar4 = CollectionData_deserializeItemMap(&stack0xfffffff0,(void *)((int)this + 0x58)),
      (char)uVar4 == '\0')))) {
    return false;
  }
  if (1 < iStack_4) {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 100));
    if (!bVar2) {
      return false;
    }
    bVar2 = Deserializer_readString(this_00,(void *)((int)this + 0x68));
    if (!bVar2) {
      return false;
    }
    bVar2 = Deserializer_readInteger(this_00,(int *)&stack0xfffffff4);
    *(undefined4 *)((int)this + 0x84) = unaff_ESI;
    if (!bVar2) {
      return false;
    }
  }
  if ((2 < iStack_4) &&
     (bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x88)), !bVar2)) {
    return false;
  }
  uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
  return (bool)uVar3;
}

