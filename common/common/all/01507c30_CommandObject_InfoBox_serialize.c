// addr: 0x01507c30
// name: CommandObject_InfoBox_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_InfoBox_serialize(void * this, void * stream) */

void __thiscall CommandObject_InfoBox_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_InfoBox block, including a
                       ValueData-like field emitted after the base CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_InfoBox\n");
  CommandObject_dump(this,stream);
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(stream);
  DebugStream_writeCString(stream,"Ending CommandObject_InfoBox\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

