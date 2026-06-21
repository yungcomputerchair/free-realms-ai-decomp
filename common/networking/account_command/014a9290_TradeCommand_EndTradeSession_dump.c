// addr: 0x014a9290
// name: TradeCommand_EndTradeSession_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_EndTradeSession_dump(int * param_1, void * param_2) */

void __thiscall TradeCommand_EndTradeSession_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for TradeCommand_EndTradeSession, wrapping the
                       TradeCommand base dump between Starting/Ending markers. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_EndTradeSession\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Ending TradeCommand_EndTradeSession\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

