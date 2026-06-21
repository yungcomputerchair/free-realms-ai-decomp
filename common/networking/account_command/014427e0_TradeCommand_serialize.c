// addr: 0x014427e0
// name: TradeCommand_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_serialize(int * param_1, int param_2) */

void __thiscall TradeCommand_serialize(void *this,int *param_1,int param_2)

{
                    /* Serializes/dumps TradeCommand, writing AccountID and TradeSessionID after the
                       network command base. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting TradeCommand\n");
  NetworkCommand_dump(this,param_1);
  DebugStream_writeCString(param_1,"AccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 4));
  DebugStream_writeCString(param_1,"TradeSessionID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Ending TradeCommand\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

