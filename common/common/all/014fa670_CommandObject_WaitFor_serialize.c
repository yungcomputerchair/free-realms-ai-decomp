// addr: 0x014fa670
// name: CommandObject_WaitFor_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_WaitFor_serialize(void * this, void * stream) */

void __thiscall CommandObject_WaitFor_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_WaitFor block, including the base
                       CommandObject data and its waited-for value field. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_WaitFor\n");
  CommandObject_dump(this,stream);
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(stream);
  DebugStream_writeCString(stream,"Ending CommandObject_WaitFor\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

