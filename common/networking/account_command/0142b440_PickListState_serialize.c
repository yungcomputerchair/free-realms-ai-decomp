// addr: 0x0142b440
// name: PickListState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PickListState_serialize(int * param_1, int param_2) */

void __thiscall PickListState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps PickListState, including CancellableStateMachineState base
                       and player, origin card, bounds, value type, and do-once flags. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x142b45b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting PickListState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"OriginCard: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xfc));
  DebugStream_writeCString(stream,"LowerBound: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x100));
  DebugStream_writeCString(stream,"UppderBound: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x104));
  DebugStream_writeCString(stream,"mValueIsInt: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x148));
  DebugStream_writeCString(stream,"mDoActionOnce: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x149));
  DebugStream_writeCString(stream,"Ending PickListState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

