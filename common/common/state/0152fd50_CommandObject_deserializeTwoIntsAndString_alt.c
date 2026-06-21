// addr: 0x0152fd50
// name: CommandObject_deserializeTwoIntsAndString_alt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTwoIntsAndString_alt(void * this, void * reader)
    */

bool __thiscall CommandObject_deserializeTwoIntsAndString_alt(void *this,void *reader)

{
  void *value;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs hooks, reads a base block, two integers, and one string field. */
  value = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    bVar2 = StreamAdapter_readThenCommit(this,value);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(value,(int *)((int)this + 8));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(value,(int *)((int)this + 0xc));
        if (bVar2) {
          bVar2 = Deserializer_readString(value,(void *)((int)this + 0x10));
          if (bVar2) {
            uVar3 = (**(code **)(*(int *)this + 0x14))(value);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

