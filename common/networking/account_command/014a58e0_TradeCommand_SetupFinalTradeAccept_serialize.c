// addr: 0x014a58e0
// name: TradeCommand_SetupFinalTradeAccept_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetupFinalTradeAccept_serialize(int * param_1, void *
   param_2) */

void __thiscall TradeCommand_SetupFinalTradeAccept_serialize(void *this,int *param_1,void *param_2)

{
  int *vector;
  
                    /* Serializes TradeCommand_SetupFinalTradeAccept with TradeCommand base data
                       plus founder and trader card lists. Evidence is the start/end marker and
                       'Founder Card List'/'Trader Card List' strings. */
  vector = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_SetupFinalTradeAccept\n");
  TradeCommand_serialize(this,param_1,(int)vector);
  DebugStream_writeCString(param_1,"Founder Card List:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0xc),vector);
  DebugStream_writeCString(param_1,"Trader Card List:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x1c),vector);
  DebugStream_writeCString(param_1,"Ending TradeCommand_SetupFinalTradeAccept\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

