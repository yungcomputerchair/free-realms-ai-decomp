// addr: 0x014b2580
// name: PollCommand_PollResponse_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PollCommand_PollResponse_deserialize(void * this, void * buffer) */

bool __thiscall PollCommand_PollResponse_deserialize(void *this,void *buffer)

{
  void *stream;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a PollResponse command by reading the base command data and then
                       two integer fields into the object before closing the read frame. */
  stream = buffer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(buffer,&buffer);
  if (cVar1 != '\0') {
    bVar2 = LoginCommand_deserialize(this,stream);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 4));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 8));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

