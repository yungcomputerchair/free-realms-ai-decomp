// addr: 0x014ff320
// name: CommandObject_RemoveSuppressEffect_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveSuppressEffect_serialize(void * this, void * stream)
    */

void __thiscall CommandObject_RemoveSuppressEffect_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_RemoveSuppressEffect block, including
                       its ValueData field after the base CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_RemoveSuppressEffect\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(stream);
  DebugStream_writeCString(stream,"Ending CommandObject_RemoveSuppressEffect\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

