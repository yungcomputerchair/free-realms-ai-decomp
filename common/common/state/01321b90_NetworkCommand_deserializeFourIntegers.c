// addr: 0x01321b90
// name: NetworkCommand_deserializeFourIntegers
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeFourIntegers(void * this, void * reader) */

bool __thiscall NetworkCommand_deserializeFourIntegers(void *this,void *reader)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_ESI;
  
                    /* Runs deserialize hooks, deserializes a nested object, then reads three or
                       four encoded integers depending on version/state before post-hook. */
  this_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if ((((cVar1 != '\0') && (cVar1 = FUN_01407cf0(this_00), cVar1 != '\0')) &&
      (bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 8)), bVar2)) &&
     ((bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0xc)), bVar2 &&
      (bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x10)), bVar2)))) {
    if ((1 < unaff_ESI) &&
       (bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x14)), !bVar2)) {
      return false;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
    return (bool)uVar3;
  }
  return false;
}

