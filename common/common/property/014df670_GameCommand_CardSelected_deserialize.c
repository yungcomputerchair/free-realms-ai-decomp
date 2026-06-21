// addr: 0x014df670
// name: GameCommand_CardSelected_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_CardSelected_deserialize(void * this, void * serializer) */

uint __thiscall GameCommand_CardSelected_deserialize(void *this,void *serializer)

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
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint uVar2;
  int unaff_EDI;
  
                    /* Deserializes CardSelected by reading four required fields and an
                       optional/newer boolean flag, then finalizing the command read. */
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
        bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x28));
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x2c));
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x30));
            uVar3 = extraout_var_04;
            if (bVar1) {
              if (2 < (int)this) {
                bVar1 = Deserializer_readInteger(this_00,(int *)&stack0xfffffff4);
                uVar3 = extraout_var_05;
                if (!bVar1) goto LAB_014df68c;
                *(bool *)((int)this + 0x34) = unaff_EDI != 0;
              }
              uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
              return uVar2;
            }
          }
        }
      }
    }
  }
LAB_014df68c:
  return (uint)uVar3 << 8;
}

