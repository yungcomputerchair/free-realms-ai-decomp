// addr: 0x0147a660
// name: CloneState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CloneState_serialize(int * param_1, int param_2) */

void __thiscall CloneState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps CloneState, including CancellableStateMachineState base and
                       CloneID, CommandObjectID, PlayerID, and OriginCard fields. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x147a67b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting CloneState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"CloneID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x100));
  DebugStream_writeCString(stream,"CommandObjectID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xfc));
  DebugStream_writeCString(stream,"OriginCard: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x104));
  DebugStream_writeCString(stream,"Ending CloneState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

