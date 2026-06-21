// addr: 0x01463a80
// name: ReshuffleState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ReshuffleState_serialize(int * param_1, int param_2) */

void __thiscall ReshuffleState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps ReshuffleState, including the CancellableStateMachineState
                       base and OtherPlayerText string member. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x1463a9b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting ReshuffleState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"OtherPlayerText: ");
  Serializer_appendString(stream,(void *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"Ending ReshuffleState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

