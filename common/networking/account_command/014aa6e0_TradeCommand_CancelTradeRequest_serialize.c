// addr: 0x014aa6e0
// name: TradeCommand_CancelTradeRequest_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_CancelTradeRequest_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_CancelTradeRequest_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_CancelTradeRequest with issued-from and origin
                       account ids after the TradeCommand base. Evidence is the marker strings and
                       account-id field labels. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_CancelTradeRequest\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Issued From AccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"OriginAccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Ending TradeCommand_CancelTradeRequest\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

