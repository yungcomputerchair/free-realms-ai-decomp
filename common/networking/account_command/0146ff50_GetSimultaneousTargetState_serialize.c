// addr: 0x0146ff50
// name: GetSimultaneousTargetState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GetSimultaneousTargetState_serialize(int * this, int serializer) */

void __thiscall GetSimultaneousTargetState_serialize(void *this,int serializer)

{
  int *stream;
  
                    /* Serializes GetSimultaneousTargetState by writing base state data and two
                       container fields. */
  if (serializer == 0) {
    serializer = 0x146ff6b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting GetSimultaneousTargetState\n");
  CancellableStateMachineState_serialize(this,stream,serializer);
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0xf8),(void *)serializer);
  STLMap_intToInt_serialize_012fc6a0(&stack0x00000000,(void *)((int)this + 0x104),serializer);
  DebugStream_writeCString(stream,"Ending GetSimultaneousTargetState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

