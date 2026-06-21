// addr: 0x014a4fb0
// name: TradeCommand_StartTradeSync_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_StartTradeSync_serialize(int * param_1, void * param_2) */

void __thiscall TradeCommand_StartTradeSync_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_StartTradeSync, including the TradeCommand base and
                       issued-from account id. Evidence is the start/end strings and 'Issued From
                       AccountID:' field label. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_StartTradeSync\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Issued From AccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending TradeCommand_StartTradeSync\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

