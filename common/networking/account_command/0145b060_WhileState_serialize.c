// addr: 0x0145b060
// name: WhileState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void WhileState_serialize(int * this, int serializer) */

void __thiscall WhileState_serialize(void *this,int serializer)

{
  int *stream;
  
                    /* Serializes WhileState, including state, revealed cards, selected card, target
                       flag, reveal IDs, and two nested serializable members. */
  if (serializer == 0) {
    serializer = 0x145b07b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting WhileState\n");
  CancellableStateMachineState_serialize(this,stream,serializer);
  DebugStream_writeCString(stream,"State: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"RevealedCards: ");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x114);
  DebugStream_writeCString(stream,"SelectedCardID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x124));
  DebugStream_writeCString(stream,"TargetGotten: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x128));
  DebugStream_writeCString(stream,"RevealIDList: ");
  STLVector_int_serialize(&stack0x00000000,(int)this + 300);
  (**(code **)(*(int *)((int)this + 0xfc) + 0x28))(stream);
  (**(code **)(*(int *)((int)this + 0x108) + 0x28))(stream);
  DebugStream_writeCString(stream,"Ending WhileState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

