// addr: 0x01476e10
// name: CustomChoiceDialogState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CustomChoiceDialogState_serialize(int * param_1, int param_2) */

void __thiscall CustomChoiceDialogState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps CustomChoiceDialogState, including base state, PlayerID,
                       three effect objects, do-effect/state values, and third-button/no-auto flags.
                        */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x1476e2b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting CustomChoiceDialogState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xf8));
  DebugStream_writeCString(stream,"First Effect: ");
  (**(code **)(*(int *)((int)this + 0xfc) + 0x28))(stream);
  DebugStream_writeCString(stream,"Second Effect: ");
  (**(code **)(*(int *)((int)this + 0x108) + 0x28))(stream);
  DebugStream_writeCString(stream,"Third Effect: ");
  (**(code **)(*(int *)((int)this + 0x114) + 0x28))(stream);
  DebugStream_writeCString(stream,"Do Effect: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x120));
  DebugStream_writeCString(stream,"state: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x124));
  DebugStream_writeCString(stream,"HasThirdButton: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x128));
  DebugStream_writeCString(stream,"NoAutoAction: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x129));
  DebugStream_writeCString(stream,"Ending CustomChoiceDialogState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

