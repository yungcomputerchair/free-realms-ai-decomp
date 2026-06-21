// addr: 0x01470f70
// name: ExecuteRuleState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExecuteRuleState_serialize(int * param_1, int param_2) */

void __thiscall ExecuteRuleState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps ExecuteRuleState after the CancellableStateMachineState
                       base, writing a rule/id field and a boolean/byte flag. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x1470f8b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting ExecuteRuleState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0xfc));
  DebugStream_writeCString(stream,"Ending ExecuteRuleState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

