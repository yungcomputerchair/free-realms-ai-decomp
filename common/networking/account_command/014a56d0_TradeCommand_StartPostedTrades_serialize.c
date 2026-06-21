// addr: 0x014a56d0
// name: TradeCommand_StartPostedTrades_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_StartPostedTrades_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_StartPostedTrades_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_StartPostedTrades by writing the TradeCommand base
                       and one scalar field at offset 0x0c. Evidence is the StartPostedTrades
                       start/end marker strings. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_StartPostedTrades\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending TradeCommand_StartPostedTrades\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

