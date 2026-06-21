// addr: 0x013d0cf0
// name: TradeCommand_AcceptPostedTrade_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptPostedTrade_serialize(void * this, void * serializer)
    */

void __thiscall TradeCommand_AcceptPostedTrade_serialize(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Serializes an AcceptPostedTrade command by writing the TradeCommand base data
                       and two integer fields. The surrounding registered ctor identifies the
                       adjacent class as TradeCommand_AcceptPostedTrade. */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  TradeCommand_serialize(this,serializer,(int)pvVar1);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

