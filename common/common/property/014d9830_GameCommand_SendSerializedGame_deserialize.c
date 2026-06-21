// addr: 0x014d9830
// name: GameCommand_SendSerializedGame_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_SendSerializedGame_deserialize(void * this, void *
   serializer) */

bool __thiscall GameCommand_SendSerializedGame_deserialize(void *this,void *serializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *local_4;
  
                    /* Deserializes an integer, a byte-count, and an allocated serialized payload
                       buffer between common GameCommand begin/end framing calls. Returns false by
                       clearing the low byte if any nested read fails. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(serializer);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x28));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(serializer,(int *)&local_4);
        if (bVar2) {
          *(void **)((int)this + 0x2c) = local_4;
          pvVar4 = Mem_Alloc((int)local_4 + 1);
          *(undefined4 *)((int)this + 0x24) = pvVar4;
          cVar1 = FUN_013cfed0((undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x2c));
          if (cVar1 != '\0') {
            uVar3 = (**(code **)(*(int *)this + 0x14))(serializer);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

