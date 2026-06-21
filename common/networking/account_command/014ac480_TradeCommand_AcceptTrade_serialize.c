// addr: 0x014ac480
// name: TradeCommand_AcceptTrade_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptTrade_serialize(int * param_1, void * param_2) */

void __thiscall TradeCommand_AcceptTrade_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_AcceptTrade by writing the TradeCommand base and
                       Trade Button boolean. Evidence is the AcceptTrade marker strings and 'Trade
                       Button:' field label. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_AcceptTrade\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Trade Button: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending TradeCommand_AcceptTrade\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

