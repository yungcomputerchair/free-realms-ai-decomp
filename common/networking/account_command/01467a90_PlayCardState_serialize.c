// addr: 0x01467a90
// name: PlayCardState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayCardState_serialize(int * param_1, int param_2) */

void __thiscall PlayCardState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps PlayCardState, including CancellableStateMachineState base
                       plus ActionPlayed and Confirm flags. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x1467aab;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting PlayCardState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"ActionPlayed: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"Confirm: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0xf9));
  DebugStream_writeCString(stream,"Ending PlayCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

