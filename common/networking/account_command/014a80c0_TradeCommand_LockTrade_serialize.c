// addr: 0x014a80c0
// name: TradeCommand_LockTrade_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_LockTrade_serialize(int * param_1, void * param_2) */

void __thiscall TradeCommand_LockTrade_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_LockTrade by writing the TradeCommand base and mLock
                       boolean. Evidence is the LockTrade marker strings and 'mLock:' field label.
                        */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_LockTrade\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"mLock: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending TradeCommand_LockTrade\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

