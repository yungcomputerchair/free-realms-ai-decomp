// addr: 0x014a65b0
// name: TradeCommand_SetTradeAllowed_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetTradeAllowed_serialize(int * param_1, void * param_2) */

void __thiscall TradeCommand_SetTradeAllowed_serialize(void *this,int *param_1,void *param_2)

{
  int *map;
  
                    /* Serializes TradeCommand_SetTradeAllowed by writing the TradeCommand base and
                       a map/list of account trade-allowed values. Evidence is the SetTradeAllowed
                       marker strings and call to a boolean-map serializer. */
  map = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_SetTradeAllowed\n");
  TradeCommand_serialize(this,param_1,(int)map);
  STLMap_intToBool_serialize_014a63e0(&stack0x00000000,(void *)((int)this + 0xc),(int)map);
  DebugStream_writeCString(param_1,"Ending TradeCommand_SetTradeAllowed\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

