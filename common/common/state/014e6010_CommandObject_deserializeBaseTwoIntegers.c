// addr: 0x014e6010
// name: CommandObject_deserializeBaseTwoIntegers
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeBaseTwoIntegers(void * this, void * reader) */

bool __thiscall CommandObject_deserializeBaseTwoIntegers(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks, reads base integer field, then reads two encoded integers into
                       fields +0xc and +8. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    cVar1 = Deserializer_readIntegerField(reader);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(reader,(int *)&local_4);
      if (bVar2) {
        *(void **)((int)this + 0xc) = local_4;
        bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 8));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

