// addr: 0x014bd8e0
// name: GameCommand_deserializeObjectIdList_014bd8e0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializeObjectIdList_014bd8e0(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeObjectIdList_014bd8e0(void *this,void *deserializer)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes a command payload containing an integer followed by a
                       GameObjectId vector, then calls the virtual post-read/finalize method.
                       Evidence: Deserializer_readInteger and GameObjectIdVector_deserialize. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(deserializer,&local_4);
  bVar1 = LobbyCommand_deserialize(this,deserializer);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 8));
    if (bVar1) {
      local_4 = deserializer;
      cVar2 = GameObjectIdVector_deserialize((int)this + 0xc);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

