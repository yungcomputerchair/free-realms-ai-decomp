// addr: 0x013d9ef0
// name: PropertyArchive_serializeOneDword
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyArchive_serializeOneDword(void * this, void * field) */

bool __thiscall PropertyArchive_serializeOneDword(void *this,void *field)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Serializes one 32-bit field inside an archive begin/end pair. It calls a
                       virtual begin method, writes the field with FUN_013c24d0, then calls the
                       virtual end method on success. */
  this_00 = field;
  cVar1 = (**(code **)(*(int *)this + 0x10))(field,&field);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
      return (bool)uVar3;
    }
  }
  return false;
}

