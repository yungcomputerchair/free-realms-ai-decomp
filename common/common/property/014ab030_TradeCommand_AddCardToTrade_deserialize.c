// addr: 0x014ab030
// name: TradeCommand_AddCardToTrade_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TradeCommand_AddCardToTrade_deserialize(void * this, void * buffer) */

bool __thiscall TradeCommand_AddCardToTrade_deserialize(void *this,void *buffer)

{
  void *stream;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes an AddCardToTrade command: opens the command read frame,
                       deserializes the TradeCommand/base fields, reads a nested component pointer
                       into this+0xc, and closes the frame. */
  stream = buffer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(buffer,&buffer);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeTwoCommonFields(this,stream);
    if (bVar2) {
      bVar2 = ComponentFactory_deserializeNullableTradeComponentPointer
                        (stream,(void *)((int)this + 0xc));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

