// addr: 0x01443020
// name: PollCommand_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_serialize(void * this, void * stream) */

void __thiscall PollCommand_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes the base PollCommand block around the common
                       NetworkCommand fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PollCommand\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Ending PollCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

