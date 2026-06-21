// addr: 0x013b1e20
// name: FUN_013b1e20
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LobbyCommand_deserializeDeckSelection(void * this, void * stream) */

bool __thiscall LobbyCommand_deserializeDeckSelection(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes a lobby/match command with common fields, a serialized
                       string/group, a boolean flag, and nested component data. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = MatchCommand_deserializeWithCommonFields(this,stream);
    if (bVar2) {
      bVar2 = Deserializer_readString(stream,(void *)((int)this + 0xc));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
        *(bool *)((int)this + 0x28) = local_4 != (void *)0x0;
        if (bVar2) {
          cVar1 = FUN_01302e20(stream,(int)this + 0x2c);
          if (cVar1 != '\0') {
            uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

