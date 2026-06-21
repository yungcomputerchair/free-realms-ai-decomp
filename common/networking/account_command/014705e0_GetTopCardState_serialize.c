// addr: 0x014705e0
// name: GetTopCardState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GetTopCardState_serialize(int * this_obj, int serializer) */

void __thiscall GetTopCardState_serialize(void *this,int *this_obj,int serializer)

{
  int *stream;
  
                    /* Serializes/dumps GetTopCardState by selecting an active serializer,
                       delegating to its state serializer, and writing start/end markers. The
                       strings name GetTopCardState. */
  if (this_obj == (int *)0x0) {
    this_obj = (int *)0x14705fb;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting GetTopCardState\n");
  CancellableStateMachineState_serialize(this,stream,(int)this_obj);
  DebugStream_writeCString(stream,"Ending GetTopCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

