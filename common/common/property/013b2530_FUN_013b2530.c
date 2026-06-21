// addr: 0x013b2530
// name: FUN_013b2530
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MatchCommand_deserializeWithCommonFields(void * this, void * stream) */

bool __thiscall MatchCommand_deserializeWithCommonFields(void *this,void *stream)

{
  void *deserializer;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a command with virtual begin/end hooks, a MatchCommand-specific
                       field, and a common field at this+8. */
  deserializer = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = LobbyCommand_deserialize(this,deserializer);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(deserializer,(int *)((int)this + 8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

