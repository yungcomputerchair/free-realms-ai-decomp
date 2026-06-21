// addr: 0x0144fa90
// name: CWDoublePassState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWDoublePassState_serialize(int * this_obj, int serializer) */

void __thiscall CWDoublePassState_serialize(void *this,int *this_obj,int serializer)

{
  void *stream;
  
                    /* Serializes/dumps CWDoublePassState by entering a serializer scope, delegating
                       to its state serializer, and emitting start/end markers. The embedded strings
                       name the class. */
  if (this_obj == (int *)0x0) {
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))(this_obj);
  }
  DebugStream_writeCString(stream,"Starting CWDoublePassState\n");
  DoublePassState_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CWDoublePassState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

