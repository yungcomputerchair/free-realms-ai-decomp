// addr: 0x014abd10
// name: TradeCommand_AcceptTradeRequest_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptTradeRequest_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_AcceptTradeRequest_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_AcceptTradeRequest with issued-from account id and
                       trade lobby id after the TradeCommand base. Evidence is the marker strings
                       and field labels. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_AcceptTradeRequest\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Issued From AccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Trade Lobby Id: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Ending TradeCommand_AcceptTradeRequest\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

