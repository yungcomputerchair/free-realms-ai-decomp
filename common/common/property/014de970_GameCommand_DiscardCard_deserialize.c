// addr: 0x014de970
// name: GameCommand_DiscardCard_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_DiscardCard_deserialize(void * this, void * serializer) */

uint __thiscall GameCommand_DiscardCard_deserialize(void *this,void *serializer)

{
  code *pcVar1;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint uVar3;
  void *local_4;
  
                    /* Deserializes DiscardCard, reading three scalar fields and a trailing boolean
                       into the large DiscardCard object before finalizing. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(serializer);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x24));
      uVar4 = extraout_var_01;
      if (bVar2) {
        bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x28));
        uVar4 = extraout_var_02;
        if (bVar2) {
          bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x2c));
          uVar4 = extraout_var_03;
          if (bVar2) {
            bVar2 = Deserializer_readInteger(serializer,(int *)&local_4);
            uVar4 = extraout_var_04;
            if (bVar2) {
              pcVar1 = *(code **)(*(int *)this + 0x14);
              *(bool *)((int)this + 0x4c) = local_4 != (void *)0x0;
              uVar3 = (*pcVar1)(serializer);
              return uVar3;
            }
          }
        }
      }
    }
  }
  return (uint)uVar4 << 8;
}

