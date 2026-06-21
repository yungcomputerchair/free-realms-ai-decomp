// addr: 0x014ddda0
// name: GameCommand_EndGame_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_EndGame_deserialize(void * this, void * serializer) */

uint __thiscall GameCommand_EndGame_deserialize(void *this,void *serializer)

{
  void *this_00;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint uVar2;
  int unaff_EDI;
  
                    /* Deserializes EndGame and conditionally reads a boolean flag into this+0x24
                       for newer protocol data before calling the base finalize hook. */
  this_00 = serializer;
  (**(code **)(*(int *)this + 0x10))(serializer,&serializer);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(this_00);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      if (2 < (int)this) {
        bVar1 = Deserializer_readInteger(this_00,(int *)&stack0xfffffff4);
        uVar3 = extraout_var_01;
        if (!bVar1) goto LAB_014dddbc;
        *(bool *)((int)this + 0x24) = unaff_EDI != 0;
      }
      uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
      return uVar2;
    }
  }
LAB_014dddbc:
  return (uint)uVar3 << 8;
}

