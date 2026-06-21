// addr: 0x014de1d0
// name: GameCommand_EndObserverMode_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_EndObserverMode_deserialize(void * this, void * serializer)
    */

uint __thiscall GameCommand_EndObserverMode_deserialize(void *this,void *serializer)

{
  code *pcVar1;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint uVar3;
  void *local_4;
  
                    /* Deserializes EndObserverMode, reading one integer-like field into this+0x24
                       after the common base read and stream/version check. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(serializer);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar2 = Deserializer_readInteger(serializer,(int *)&local_4);
      uVar4 = extraout_var_01;
      if (bVar2) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(void **)((int)this + 0x24) = local_4;
        uVar3 = (*pcVar1)(serializer);
        return uVar3;
      }
    }
  }
  return (uint)uVar4 << 8;
}

