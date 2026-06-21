// addr: 0x014d7720
// name: GameCommand_SetupGame_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_SetupGame_deserialize(void * this, void * reader) */

uint __thiscall GameCommand_SetupGame_deserialize(void *this,void *reader)

{
  void *this_00;
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
                    /* Deserializes setup-game command fields after the base game command, including
                       server/player fields and optional version-gated vectors/integers. */
  this_00 = reader;
  uVar2 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if ((char)uVar2 != '\0') {
    uVar2 = GameCommand_deserializeCommon(this_00);
    if ((char)uVar2 != '\0') {
      bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x24));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1) {
        bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x28));
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1) {
          if (2 < (int)this) {
            uVar2 = Game_deserializeIntPairVector_0135d6e0
                              (&stack0xfffffff4,(void *)((int)this + 0x30));
            if ((char)uVar2 == '\0') goto LAB_014d773c;
          }
          if (3 < (int)this) {
            bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x2c));
            uVar2 = CONCAT31(extraout_var_01,bVar1);
            if (!bVar1) goto LAB_014d773c;
          }
          uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
          return uVar2;
        }
      }
    }
  }
LAB_014d773c:
  return uVar2 & 0xffffff00;
}

