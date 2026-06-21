// addr: 0x014a9e90
// name: TradeCommand_ClearAcceptState_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_ClearAcceptState_dump(int * param_1, void * param_2) */

void __thiscall TradeCommand_ClearAcceptState_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for TradeCommand_ClearAcceptState, wrapping the
                       TradeCommand base dump between Starting/Ending markers. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_ClearAcceptState\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Ending TradeCommand_ClearAcceptState\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

