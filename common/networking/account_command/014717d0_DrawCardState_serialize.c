// addr: 0x014717d0
// name: DrawCardState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DrawCardState_serialize(int * param_1, int param_2) */

void __thiscall DrawCardState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps DrawCardState, including CancellableStateMachineState base,
                       PlayerID, OriginCard, several numeric members, a child object, and flags. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x14717eb;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting DrawCardState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"OriginCard: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xfc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x100));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x104));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x108));
  (**(code **)(*(int *)((int)this + 0x10c) + 0x28))(stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x118));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x11c));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x120));
  DebugStream_writeCString(stream,"Ending DrawCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

