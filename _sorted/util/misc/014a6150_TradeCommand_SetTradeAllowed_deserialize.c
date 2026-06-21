// addr: 0x014a6150
// name: TradeCommand_SetTradeAllowed_deserialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TradeCommand_SetTradeAllowed_deserialize(void * this, void * stream) */

bool __thiscall TradeCommand_SetTradeAllowed_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes TradeCommand_SetTradeAllowed, reading base command state and
                       then optional trade-allowed fields before finalizing the read. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeTwoCommonFields(this,stream);
    if (bVar2) {
      if (unaff_EDI < 2) {
LAB_014a61ad:
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
      local_4 = stream;
      bVar2 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
      if (bVar2) {
        bVar2 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
        if (bVar2) goto LAB_014a61ad;
      }
    }
  }
  return false;
}

