// addr: 0x014a4d00
// name: TradeCommand_StartTradeSync_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint TradeCommand_StartTradeSync_deserialize(int * this, void * serializer) */

uint __thiscall TradeCommand_StartTradeSync_deserialize(void *this,void *serializer)

{
  void *stream;
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint uVar2;
  
                    /* Deserializes TradeCommand_StartTradeSync by reading the TradeCommand base, a
                       persistent-component pointer field, and a version-gated extra field before
                       closing the serializer chunk. */
  stream = serializer;
  (**(code **)(*(int *)this + 0x10))(serializer,&serializer);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeTwoCommonFields(this,stream);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = ComponentFactory_deserializeNullableTradeComponentPointer
                        (stream,(void *)((int)this + 0xc));
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (1 < (int)this) {
          FUN_014a4a40((int)this + 0x10);
          uVar3 = extraout_var_02;
          if (extraout_AL_00 == '\0') goto LAB_014a4d1c;
        }
        uVar2 = (**(code **)(*(int *)this + 0x14))(stream);
        return uVar2;
      }
    }
  }
LAB_014a4d1c:
  return (uint)uVar3 << 8;
}

