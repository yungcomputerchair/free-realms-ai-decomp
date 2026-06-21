// addr: 0x013d0800
// name: TradeCommand_CancelPostedTrade_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_CancelPostedTrade_dump(int * param_1, void * param_2) */

void __thiscall TradeCommand_CancelPostedTrade_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for TradeCommand_CancelPostedTrade, including
                       TradeCommand base state and its posted-trade id field. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_CancelPostedTrade\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending TradeCommand_CancelPostedTrade\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

