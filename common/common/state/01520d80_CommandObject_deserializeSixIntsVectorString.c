// addr: 0x01520d80
// name: CommandObject_deserializeSixIntsVectorString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeSixIntsVectorString(void * this, void * reader)
    */

bool __thiscall CommandObject_deserializeSixIntsVectorString(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs hooks, reads base integer data, six integer fields, an integer vector, a
                       string, and a final integer field. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readIntegerWithHooks(this,reader);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0xc));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x10));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x14));
          if (bVar2) {
            bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x18));
            if (bVar2) {
              bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x1c));
              if (bVar2) {
                bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x20));
                if (bVar2) {
                  FUN_00420fb6();
                  bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x24));
                  if (bVar2) {
                    bVar2 = Deserializer_readString(reader,(void *)((int)this + 0x34));
                    if (bVar2) {
                      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 8));
                      if (bVar2) {
                        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
                        return (bool)uVar3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

