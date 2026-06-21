// addr: 0x014fffa0
// name: CommandObject_RemoveKeyword_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveKeyword_serialize(void * this, void * stream) */

void __thiscall CommandObject_RemoveKeyword_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_RemoveKeyword block, including its
                       ValueData field after the base CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_RemoveKeyword\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(stream);
  DebugStream_writeCString(stream,"Ending CommandObject_RemoveKeyword\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

