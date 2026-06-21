// addr: 0x013d35b0
// name: PropertyArchive_serializeThreeDwords
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyArchive_serializeThreeDwords(void * this, void * fields) */

bool __thiscall PropertyArchive_serializeThreeDwords(void *this,void *fields)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Serializes three consecutive 32-bit fields inside an archive begin/end pair.
                       It aborts on the first failed field serializer and returns false with the
                       high bytes cleared. */
  this_00 = fields;
  cVar1 = (**(code **)(*(int *)this + 0x10))(fields,&fields);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    if (bVar2) {
      bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 8));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0xc));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

