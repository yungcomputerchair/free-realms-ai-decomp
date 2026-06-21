// addr: 0x014a7c70
// name: TradeCommand_PostedTradeError_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_PostedTradeError_serialize(int * this, void * serializer) */

void __thiscall TradeCommand_PostedTradeError_serialize(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Serializes TradeCommand_PostedTradeError by opening a serializer chunk,
                       writing the TradeCommand base, appending an integer error field and a
                       boolean/byte field, then closing the chunk. */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  TradeCommand_serialize(this,serializer,(int)pvVar1);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

