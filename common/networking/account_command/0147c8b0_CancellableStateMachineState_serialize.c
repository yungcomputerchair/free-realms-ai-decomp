// addr: 0x0147c8b0
// name: CancellableStateMachineState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_serialize(int * param_1, int param_2) */

void __thiscall CancellableStateMachineState_serialize(void *this,int *param_1,int param_2)

{
  void *stream;
  
                    /* Serializes/dumps CancellableStateMachineState by emitting the
                       StateMachineState base and Cancel Strategy field. */
  if (param_1 == (int *)0x0) {
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))(param_1);
  }
  DebugStream_writeCString(stream,"Starting CancellableStateMachineState\n");
  StateMachineState_dump(this,stream);
  DebugStream_writeCString(stream,"Cancel Strategy: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf4));
  DebugStream_writeCString(stream,"Ending CancellableStateMachineState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

