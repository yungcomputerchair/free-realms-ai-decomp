// addr: 0x014e4f20
// name: CommandObject_deserializeBaseIntStringInt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeBaseIntStringInt(void * this, void * reader) */

bool __thiscall CommandObject_deserializeBaseIntStringInt(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs command deserialize hooks, reads a base integer field, then reads an
                       integer, string, and integer into the object. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    cVar1 = Deserializer_readIntegerField(reader);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(reader,(int *)&local_4);
      if (bVar2) {
        *(void **)((int)this + 0x24) = local_4;
        bVar2 = Deserializer_readString(reader,(void *)((int)this + 8));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x28));
          if (bVar2) {
            uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

