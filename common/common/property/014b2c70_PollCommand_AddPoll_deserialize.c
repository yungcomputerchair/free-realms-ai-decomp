// addr: 0x014b2c70
// name: PollCommand_AddPoll_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PollCommand_AddPoll_deserialize(void * this, void * buffer) */

bool __thiscall PollCommand_AddPoll_deserialize(void *this,void *buffer)

{
  void *stream;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes an AddPoll command by reading the base command data and then a
                       nested component pointer into the first payload field. */
  stream = buffer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(buffer,&buffer);
  if (cVar1 != '\0') {
    bVar2 = LoginCommand_deserialize(this,stream);
    if (bVar2) {
      bVar2 = ComponentFactory_deserializeNullablePollComponentPointer
                        (stream,(void *)((int)this + 4));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

