// addr: 0x0141b520
// name: GameCommand_deserializeCommon
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall GameCommand_deserializeCommon(int *param_1,void *param_2)

{
  void *reader;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  undefined3 extraout_var_02;
  void *pvVar2;
  undefined3 extraout_var_03;
  uint uVar3;
  
                    /* Common deserialization wrapper for game commands: invokes virtual stream
                       begin/end hooks, reads common IDs, resolves the Game pointer with
                       Game_findByID, and deserializes shared fields. Called by many
                       GameCommand_*_deserialize functions. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    NetworkCommand_deserializeTemplate(param_1,reader);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(reader,param_1 + 1);
      uVar4 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(reader,param_1 + 3);
        uVar3 = CONCAT31(extraout_var_02,bVar1);
        if (bVar1) {
          pvVar2 = Game_findByID(param_1[3]);
          param_1[2] = (int)pvVar2;
          if ((int)param_1 < 2) {
LAB_0141b5b1:
            uVar3 = (**(code **)(*param_1 + 0x14))(reader);
            return uVar3;
          }
          bVar1 = Deserializer_readTimeValue(reader,param_1 + 4);
          uVar3 = CONCAT31(extraout_var_03,bVar1);
          if (bVar1) {
            uVar3 = Game_deserializeIntPairVector_01300190(&stack0xfffffff4,param_1 + 6);
            if ((char)uVar3 != '\0') goto LAB_0141b5b1;
          }
        }
        return uVar3 & 0xffffff00;
      }
    }
  }
  return (uint)uVar4 << 8;
}

