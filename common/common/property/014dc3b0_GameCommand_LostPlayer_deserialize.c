// addr: 0x014dc3b0
// name: GameCommand_LostPlayer_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_LostPlayer_deserialize(void * this, void * serializer) */

bool __thiscall GameCommand_LostPlayer_deserialize(void *this,void *serializer)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes one integer member between common GameCommand begin/end framing
                       calls. Returns false by clearing the low byte if any nested read fails. */
  this_00 = serializer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(serializer,&serializer);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(this_00);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x24));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

