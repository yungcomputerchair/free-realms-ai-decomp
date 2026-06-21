// addr: 0x014dd380
// name: GameCommand_FinishMultiaction_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_FinishMultiaction_deserialize(void * this, void * serializer)
    */

uint __thiscall GameCommand_FinishMultiaction_deserialize(void *this,void *serializer)

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
  
                    /* Deserializes the FinishMultiaction payload by invoking the base command read
                       hooks, checking the stream/version helper, reading one field at this+0x24,
                       then finalizing the read. */
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
        uVar2 = (**(code **)(*(int *)this + 0x14))(this_00);
        return uVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

