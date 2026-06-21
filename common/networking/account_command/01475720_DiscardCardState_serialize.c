// addr: 0x01475720
// name: DiscardCardState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DiscardCardState_serialize(int * this, int serializer) */

void __thiscall DiscardCardState_serialize(void *this,int serializer)

{
  int *stream;
  
                    /* Serializes DiscardCardState fields including player, origin card, reason,
                       counts, flags, emitted event, and an integer list. */
  if (serializer == 0) {
    serializer = 0x147573b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting DiscardCardState\n");
  CancellableStateMachineState_serialize(this,stream,serializer);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"OriginCard: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xfc));
  DebugStream_writeCString(stream,"Discard Reason: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x100));
  DebugStream_writeCString(stream,"Num Cards: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x104));
  DebugStream_writeCString(stream,"Play Area: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x108));
  DebugStream_writeCString(stream,"Random: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x10c));
  DebugStream_writeCString(stream,"Cost Effect: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x10d));
  DebugStream_writeCString(stream,"Emitted Event: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x110));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x118);
  DebugStream_writeCString(stream,"Ending DiscardCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

