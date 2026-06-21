// addr: 0x014a86b0
// name: TradeCommand_IssueTradeRequest_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_IssueTradeRequest_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_IssueTradeRequest_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_IssueTradeRequest with issue-to account id and group
                       id after the TradeCommand base. Evidence is the marker strings and field
                       labels. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_IssueTradeRequest\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Issue To AccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"GroupID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Ending TradeCommand_IssueTradeRequest\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

