// addr: 0x0144ece0
// name: CWDrawCardState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWDrawCardState_serialize(int * this_obj, int serializer) */

void __thiscall CWDrawCardState_serialize(void *this,int *this_obj,int serializer)

{
  int *stream;
  
                    /* Serializes/dumps CWDrawCardState by obtaining/entering a serializer scope,
                       calling the DrawCardState serializer, and emitting start/end markers. The
                       string literals name CWDrawCardState. */
  if (this_obj == (int *)0x0) {
    this_obj = (int *)0x144ecfb;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting CWDrawCardState\n");
  DrawCardState_serialize(this,stream,(int)this_obj);
  DebugStream_writeCString(stream,"Ending CWDrawCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

