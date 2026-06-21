// addr: 0x014e0fb0
// name: GameCommand_ButtonPressed_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_ButtonPressed_deserialize(void * this, void * serializer) */

uint __thiscall GameCommand_ButtonPressed_deserialize(void *this,void *serializer)

{
  void *this_00;
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
  int unaff_ESI;
  
                    /* Deserializes ButtonPressed, reading the first payload field and, for newer
                       protocol data, two additional fields before finalizing. */
  this_00 = serializer;
  (**(code **)(*(int *)this + 0x10))(serializer,&serializer);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(this_00);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x24));
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (unaff_ESI < 3) {
LAB_014e1012:
          uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
          return uVar2;
        }
        bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x28));
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x2c));
          uVar3 = extraout_var_03;
          if (bVar1) goto LAB_014e1012;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

