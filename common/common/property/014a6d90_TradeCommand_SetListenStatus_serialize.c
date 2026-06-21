// addr: 0x014a6d90
// name: TradeCommand_SetListenStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetListenStatus_serialize(int * this, void * serializer) */

void __thiscall TradeCommand_SetListenStatus_serialize(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Serializes TradeCommand_SetListenStatus by opening a serializer chunk,
                       writing the TradeCommand base, appending the listen-status byte at this+0x0c,
                       and closing the chunk. */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  TradeCommand_serialize(this,serializer,(int)pvVar1);
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

