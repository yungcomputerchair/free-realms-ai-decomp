// addr: 0x01502e70
// name: CommandObject_Pause_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Pause_serialize(void * this, void * stream) */

void __thiscall CommandObject_Pause_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_Pause block, including its ValueData
                       field after the base CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_Pause\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(stream);
  DebugStream_writeCString(stream,"Ending CommandObject_Pause\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

