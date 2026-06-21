// addr: 0x014d90b0
// name: GameCommand_SetObserverMode_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_SetObserverMode_deserialize(void * this, void * serializer)
    */

bool __thiscall GameCommand_SetObserverMode_deserialize(void *this,void *serializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes a nullable/boolean value and one integer member between common
                       GameCommand begin/end framing calls. Returns false by clearing the low byte
                       if any nested read fails. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(serializer);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(serializer,(int *)&local_4);
      if (bVar2) {
        *(bool *)((int)this + 0x24) = local_4 != (void *)0x0;
        bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x28));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(serializer);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

