// addr: 0x014250d0
// name: GameCommand_DrawCards_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_DrawCards_deserialize(void * this, void * reader) */

uint __thiscall GameCommand_DrawCards_deserialize(void *this,void *reader)

{
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint uVar2;
  void *vector;
  undefined4 unaff_EDI;
  void *local_4;
  
                    /* Deserializes a draw-cards game command: base command data, a card-id
                       vector/list, another structured field, and a source integer. */
  (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(reader);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      local_4 = reader;
      bVar1 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x38));
      uVar3 = extraout_var_01;
      if (bVar1) {
        local_4 = reader;
        bVar1 = StdVectorPairBool_deserialize(&local_4,vector);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
          uVar3 = extraout_var_03;
          if (bVar1) {
            *(undefined4 *)((int)this + 0x24) = unaff_EDI;
            uVar2 = (**(code **)(*(int *)this + 0x14))(reader);
            return uVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

