// addr: 0x014aa2d0
// name: TradeCommand_ChangeTradeSession_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_ChangeTradeSession_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_ChangeTradeSession_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_ChangeTradeSession by writing the TradeCommand base
                       and old trade session id. Evidence is the marker strings and
                       'OldTradeSessionID:' label. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_ChangeTradeSession\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"OldTradeSessionID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending TradeCommand_ChangeTradeSession\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

