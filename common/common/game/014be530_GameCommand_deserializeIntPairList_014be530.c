// addr: 0x014be530
// name: GameCommand_deserializeIntPairList_014be530
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializeIntPairList_014be530(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeIntPairList_014be530(void *this,void *deserializer)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  void *local_4;
  
                    /* Deserializes a command payload containing an integer and one vector of
                       integer pairs, then finalizes through a virtual method. Evidence:
                       Deserializer_readInteger and Game_deserializeIntPairVector_0135d6e0. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(deserializer,&local_4);
  bVar1 = LobbyCommand_deserialize(this,deserializer);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 8));
    if (bVar1) {
      local_4 = deserializer;
      uVar3 = Game_deserializeIntPairVector_0135d6e0(&local_4,(void *)((int)this + 0xc));
      if ((char)uVar3 != '\0') {
        uVar2 = (**(code **)(*(int *)this + 0x14))(deserializer);
        return (bool)uVar2;
      }
    }
  }
  return false;
}

