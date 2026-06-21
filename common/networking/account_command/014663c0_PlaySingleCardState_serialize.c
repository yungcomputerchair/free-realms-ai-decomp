// addr: 0x014663c0
// name: PlaySingleCardState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlaySingleCardState_serialize(int * param_1, int param_2) */

void __thiscall PlaySingleCardState_serialize(void *this,int *param_1,int param_2)

{
  int *stream;
  
                    /* Serializes/dumps PlaySingleCardState by emitting the
                       CancellableStateMachineState base and one member at param_1+0x3e. */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x14663db;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting PlaySingleCardState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0xf8);
  DebugStream_writeCString(stream,"Ending PlaySingleCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

