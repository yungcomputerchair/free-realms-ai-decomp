// addr: 0x014f8cc0
// name: CommandObject_deserializeIntsStringVectorsAndPairs
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeIntsStringVectorsAndPairs(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeIntsStringVectorsAndPairs(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_EDI;
  void *local_4;
  
                    /* Runs hooks and reads three integers, a string, integer vector,
                       value/component data, and optional int-pair vector for newer versions. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if ((((cVar1 != '\0') && (bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 8)), bVar2))
      && (bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0xc)), bVar2)) &&
     ((bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x10)), bVar2 &&
      (bVar2 = Deserializer_readString(reader,(void *)((int)this + 0x14)), bVar2)))) {
    local_4 = reader;
    bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x30));
    if ((bVar2) && (cVar1 = FUN_012faf70(reader,(int)this + 0x4c), cVar1 != '\0')) {
      if (1 < unaff_EDI) {
        local_4 = reader;
        uVar4 = Game_deserializeIntPairVector_01300190(&local_4,(void *)((int)this + 0x40));
        if ((char)uVar4 == '\0') {
          return false;
        }
      }
      uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
      return (bool)uVar3;
    }
  }
  return false;
}

