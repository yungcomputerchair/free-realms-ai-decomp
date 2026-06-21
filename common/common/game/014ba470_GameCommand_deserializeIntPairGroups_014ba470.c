// addr: 0x014ba470
// name: GameCommand_deserializeIntPairGroups_014ba470
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializeIntPairGroups_014ba470(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeIntPairGroups_014ba470(void *this,void *deserializer)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes a command payload consisting of three int-pair vectors, with
                       later versions adding an integer and an additional int-pair vector. Evidence:
                       repeated Game_deserializeIntPairVector calls and version-gated
                       Deserializer_readInteger. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(deserializer,&local_4);
  bVar1 = LobbyCommand_deserialize(this,deserializer);
  if (bVar1) {
    local_4 = deserializer;
    uVar3 = Game_deserializeIntPairVector_0135d6e0(&local_4,(void *)((int)this + 8));
    if ((((char)uVar3 != '\0') &&
        (uVar3 = Game_deserializeIntPairVector_0135d6e0(&local_4,(void *)((int)this + 0x14)),
        (char)uVar3 != '\0')) &&
       (uVar3 = Game_deserializeIntPairVector_0135d6e0(&local_4,(void *)((int)this + 0x20)),
       (char)uVar3 != '\0')) {
      if ((1 < unaff_EDI) &&
         (bVar1 = Deserializer_readInteger(deserializer,(int *)((int)this + 0x2c)), !bVar1)) {
        return false;
      }
      if ((2 < unaff_EDI) &&
         (uVar3 = Game_deserializeIntPairVector_0135d6e0(&local_4,(void *)((int)this + 0x30)),
         (char)uVar3 == '\0')) {
        return false;
      }
      uVar2 = (**(code **)(*(int *)this + 0x14))(deserializer);
      return (bool)uVar2;
    }
  }
  return false;
}

