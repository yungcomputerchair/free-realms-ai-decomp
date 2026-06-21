// addr: 0x014d6cd0
// name: GatewayCommand_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_serialize(void * this, void * stream) */

void __thiscall GatewayCommand_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes the base GatewayCommand block around common
                       NetworkCommand fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GatewayCommand\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Ending GatewayCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

